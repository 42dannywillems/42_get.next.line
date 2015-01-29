#include "get_next_line.h"

int		find_fd(int *fd_search, t_file *fd_compare)
{
	return (*fd_search != fd_compare->fd);
}

/*
 * Renvoie le noeud comportant fd comme fd.
 * Si le fd n'est pas encore dedans, il sera insere, et il sera mis en tete
 * Si le fd est dedans, on renvoie simplement le maillon qui le contient
 */
t_slist		*get_fd(t_slist **opened_fd, int fd)
{
	t_slist *current_fd;
	t_file	*current_file;

	if ((current_fd = gs_slist_find(*opened_fd, &fd, &find_fd)) == NULL)
	{
		current_file = (t_file *)malloc(sizeof(t_file));
		if (current_file)
		{
			current_file->fd = fd;
			if ((current_file->red = ft_strnew(0)) == NULL)
			{
				free(current_file);
				return (NULL);
			}
			return ((*opened_fd = gs_slist_create(current_file, *opened_fd)));
		}
		return (NULL);
	}
	return (current_fd);
}

t_slist		*init_fd(int fd)
{
	t_slist	*opened_fd;
	t_file	*current_file;

	if ((current_file = (t_file *)(malloc(sizeof(t_file)))) == NULL)
		return (NULL);
	if ((current_file->red = ft_strnew(0)))
		current_file->fd;
	else
	{
		free(current_file);
		return (NULL);
	}
	if ((opened_fd = gs_slist_create(current_file, NULL)) == NULL)
	{
		free(current_file->red);
		free(current_file);
		return (NULL);
	}
	return (opened_fd);
}

int		get_next_line(int fd, char **line)
{
	static t_slist	*opened_fd;
	t_slist			*current_fd;
	int				ret;
	char			buf[BUFSIZE + 1];
	t_file			*current_file; // Pour récupérer le data du noeud courant.
	char			*chr; // strchr
	int				yet;

	// opened_fd est mis à jour automatiquement
	// Si il est nul, ça veut dire qu'on a eu une erreur lors d'une allocation,
	// donc on renvoie une erreur.
	yet = TRUE;
	if (opened_fd == NULL)
	{
		if ((opened_fd = init_fd(fd)) == NULL)
			return (GNL_ERROR);
		current_fd = opened_fd;
	}
	else if ((current_fd = get_fd(&opened_fd, fd)) == NULL)
			return (GNL_ERROR);
	current_file = (t_file *)(current_fd->data);

	ft_putstr("Red before all : ");
	ft_putendl(current_file->red);

	while (yet)
	{
		if ((ret = read(fd, buf, BUFSIZE)) == READ_ERROR)
			return (GNL_ERROR);
		buf[ret] = '\0';
		// Si on a un retour à la ligne dans buf.
		if ((chr = ft_strchr(buf, '\n')))
		{
			*line = ft_strnew(ft_strlen(current_file->red) + chr - buf);
			*line = ft_strcat(*line, current_file->red);
			*line = ft_strncat(*line, buf, chr - buf);
			ft_strclr(current_file->red);
			current_file->red = ft_strdup(chr + 1);
			if (ret == READ_FINISHED)
			{
//				gs_slist_del(opened_fd, &fd, &find_fd);
				return (GNL_FINISHED);
			}
			yet = FALSE;
		}
		else
		{
			ft_putendl("Avant la concatenation");
			ft_putstr("Red : ");
			ft_putendl(current_file->red);
			ft_putstr("Buffer : ");
			ft_putendl(buf);
			ft_putendl("------------------------");

			current_file->red = ft_strscat(current_file->red, buf);

			ft_putendl("Apres la concatenation, Red : ");
			ft_putendl(current_file->red);
			ft_putendl("------------------------\n");

			if (ret == READ_FINISHED)
			{
	//			gs_slist_del(opened_fd, &fd, &find_fd);
				return (GNL_FINISHED);
			}
		}
	}
	return (GNL_OK);
}
