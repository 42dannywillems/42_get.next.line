#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include "libft.h"
#define BUFSIZE 32

typedef struct		s_file
{
	int		fd;
	char	*red;
	bool_t	finished;
}					t_file;

int		get_next_line(int fd, char **line);

#endif
