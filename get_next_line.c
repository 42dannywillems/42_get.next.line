#include "get_next_line.h"

int		find_fd(int *fd_search, t_file *fd_compare)
{
	return (*fd_search != fd_compare->fd);
}

int		update_red_line(t_file *file, char **line, char *buf, int type)
{
	char *tmp;

	if (type >= 0 && (*line = ft_strndup(file->red, type)))
	{
		file->red += type + 1;
		return (TRUE);
	}
	else if (type == GNL_FINISHED && (*line = ft_strdup(file->red)))
	{
		ft_strdel(&(file->b_red));
		file->red = NULL;
		return (TRUE);
	}
	else if (type == GNL_JOIN && (tmp = ft_strjoin(file->red, buf)))
	{
		ft_strdel(&(file->b_red));
		file->red = tmp;
		file->b_red = tmp;
		return (TRUE);
	}
	return (FALSE);
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
		if ((current_file = (t_file *)malloc(sizeof(t_file))))
		{
			if ((current_file->b_red = ft_strdup("")) == NULL)
			{
				free(current_file);
				return (NULL);
			}
			current_file->fd = fd;
			current_file->red = current_file->b_red;
			return ((*opened_fd = gs_slist_push_front(*opened_fd, current_file)));
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
	if ((current_file->b_red = ft_strdup("")))
	{
		current_file->red = current_file->b_red;
		current_file->fd = fd;
	}
	else
	{
		free(current_file);
		return (NULL);
	}
	if ((opened_fd = gs_slist_create(current_file, NULL)) == NULL)
	{
		free(current_file->b_red);
		free(current_file);
		return (NULL);
	}
	return (opened_fd);
}

int		get_next_line(int fd, char **line)
{
	static t_slist	*opened_fd;
	t_slist			*current_fd;
	t_file			*current_file;
	int				ret;
	char			buf[BUFSIZE + 1];
	char			*chr;
	int				yet;

	yet = TRUE;
	// At the first call, we must initialize opened_fd. init_fd do it.
	if (opened_fd == NULL)
	{
		if ((opened_fd = init_fd(fd)) == NULL)
			return (GNL_ERROR);
		current_fd = opened_fd;
	}
	// opened_fd is updated automatically
	// if get_fd returns NULL, it's because there's a malloc which didn't work,
	// so we return an error.
	else if ((current_fd = get_fd(&opened_fd, fd)) == NULL)
		return (GNL_ERROR);
	current_file = (t_file *)(current_fd->data);
	while (yet)
	{
		if ((chr = ft_strchr(current_file->red, '\n')))
		{
			if (update_red_line(current_file, line, NULL, chr - current_file->red) == FALSE)
				return (GNL_ERROR);
			yet = FALSE;
		}
		else
		{
			if ((ret = read(current_file->fd, buf, BUFSIZE)) == READ_ERROR)
				return (GNL_ERROR);
			buf[ret] = '\0';
			if (ret == READ_FINISHED)
			{
				if (update_red_line(current_file, line, buf, GNL_END) == FALSE)
					return (GNL_ERROR);
//				Delete the current_fd node in the same time
				gs_slist_delete(opened_fd, &fd, &find_fd);
				ft_strdel(&(current_file->b_red));
				free(current_file);
				return (GNL_FINISHED);
			}
//			Realloc current_file->red with enough memory space to concatenate with buffer
			if ((update_red_line(current_file, NULL, buf, GNL_JOIN) == FALSE))
				return (GNL_ERROR);
		}
	}
	return (GNL_OK);
}
