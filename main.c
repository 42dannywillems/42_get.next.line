#include "libft.h"
#include "get_next_line.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	int fd;
	char **line;

	if ((line = (char **)malloc(sizeof(char *))) && 
		(fd = open("get_next_line.c", O_RDONLY)) != -1)
	{
		get_next_line(fd, line);
//		ft_putendl(*line);
		get_next_line(fd, line);
//		ft_putendl(*line);
		get_next_line(fd, line);
//		ft_putendl(*line);
		get_next_line(fd, line);
//		ft_putendl(*line);
		get_next_line(fd, line);
//		ft_putendl(*line);
	}
	return (0);
}
