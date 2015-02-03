#include "get_next_line.h"

static int		find_fd(void *fd_search, void *fd_compare)
{
	return (*(int *)fd_search != ((t_file *)(fd_compare))->fd);
}

static int		gnl_read(t_slist **opened_fd, t_file *c_file, char **line)
{
	char	buf[BUFSIZE + 1];
	char	*tmp;
	int		ret;

	if ((ret = read(c_file->fd, buf, BUFSIZE)) == READ_ERROR)
		return (GNL_ERROR);
	buf[ret] = '\0';
	if (ret == READ_FINISHED)
	{
		if ((*line = ft_strdup(c_file->red)) == NULL)
			return (GNL_ERROR);
		*opened_fd = gs_slist_delete(*opened_fd, &c_file->fd, &find_fd);
		free(c_file->b_red);
		free(c_file);
		return (GNL_FINISHED);
	}
	if ((tmp = ft_strjoin(c_file->red, buf)) == NULL)
		return (GNL_ERROR);
	free(c_file->b_red);
	c_file->b_red = tmp;
	c_file->red = tmp;
	return (get_next_line(c_file->fd, line));
}

static t_file	*get_file(t_slist **opened_fd, int fd)
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
			current_file->red = current_file->b_red;
			current_file->fd = fd;
			if ((*opened_fd = gs_slist_push_front(*opened_fd, current_file)))
				return (current_file);
			free(current_file->b_red);
			free(current_file);
		}
	}
	else
		return ((t_file *)(current_fd->data));
	return (NULL);
}

int		get_next_line(int fd, char **line)
{
	static t_slist	*opened_fd = NULL;
	t_file			*c_file;
	char			*chr;

	if (fd <= 0 || !line || (c_file = get_file(&opened_fd, fd)) == NULL)
		return (GNL_ERROR);
	if ((chr = ft_strchr(c_file->red, '\n')))
	{
		if ((*line = ft_strndup(c_file->red, chr - c_file->red)) == NULL)
			return (GNL_ERROR);
		c_file->red = chr + 1;
		return (GNL_OK);
	}
	return (gnl_read(&opened_fd, c_file, line));
}
