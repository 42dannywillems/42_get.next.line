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
			(current_file->red)[0] = '\0';
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
	{
		(current_file->red)[0] = '\0';
		current_file->fd = fd;
	}
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
	int				ret; // read
	char			buf[BUFSIZE + 1];
	t_file			*current_file; // Pour récupérer le data du noeud courant.
	char			*chr; // strchr
	int				yet;

	yet = TRUE;
	// At the first call, we must initialize opened_fd. init_fd do it.
	if (opened_fd == NULL)
	{
		if ((opened_fd = init_fd(fd)) == NULL)
			return (GNL_ERROR);
		current_fd = opened_fd;
	}
	// opened_fd est mis à jour automatiquement
	// Si il est null, ça veut dire qu'on a eu une erreur lors d'une allocation,
	// donc on renvoie une erreur.
	else if ((current_fd = get_fd(&opened_fd, fd)) == NULL)
		return (GNL_ERROR);

	// To avoid too long assignement.
	current_file = (t_file *)(current_fd->data);

	while (yet)
	{
		if ((chr = ft_strchr(current_file->red, '\n')))
		{
//			We keep characters from current_file->red beginning to chr, so chr -
//			current_file->red characters to keep and to duplicate in *line.
			*line = ft_strndup(current_file->red, chr - current_file->red);
//			clear character before chr
//			current_file->red = ft_strndel(&(current_file->red), chr - current_file->red);
//			Now, current_file->red points after the \n character
			current_file->red = chr + 1;
//			We stop to read.
			yet = FALSE;
		}
		else
		{
//			ft_putnbrendl(gs_slist_size(opened_fd));
			if ((ret = read(current_file->fd, buf, BUFSIZE)) == READ_ERROR)
				return (GNL_ERROR);
			buf[ret] = '\0';
			if (ret == READ_FINISHED)
			{
				ft_putnbrendl(gs_slist_size(opened_fd));
				ft_putstr("FD : ");
				ft_putnbrendl(current_file->fd);
				*line = ft_strdup(current_file->red);
				ft_putendl("line");
				ft_putendl(*line);
				ft_putendl("CURRENT");
				ft_putendl(current_file->red);
				gs_slist_delete(opened_fd, &fd, &find_fd);
				ft_putnbrendl(gs_slist_size(opened_fd));
				ft_strdel(&(current_file->red));
				free(current_file);
				return (GNL_FINISHED);
			}
//			Realloc current_file->red with enough memory space to concatenate with buffer
			if ((current_file->red = ft_strjoin_free(current_file->red, buf)) == NULL)
				return (GNL_ERROR);
		}
	}
	return (GNL_OK);
}
