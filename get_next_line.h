#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include "libft.h"
#include <unistd.h>

#define BUFSIZE 10

#define GNL_ERROR -1
#define GNL_FINISHED 0
#define GNL_OK 1
#define GNL_END -1
#define GNL_JOIN -2

#define READ_ERROR -1
#define READ_FINISHED 0

typedef struct		s_file
{
	int		fd;
	char	*red;
	char	*b_red;
}					t_file;

int		find_fd(void *fd_search, void *fd_compare);
t_file	*get_file(t_slist **opened_fd, int fd);
int		get_next_line(int fd, char **line);

#endif
