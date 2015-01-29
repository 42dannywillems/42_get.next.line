#include "libft.h"
#include "get_next_line.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define NB_LINE 500
int main(int argc, char **argv)
{
	int fd_c;
	int fd_h;
	int fd_make;
	char *line;
	count_t i;

	i = 0;
	if ((fd_c = open("get_next_line.c", O_RDONLY)) != -1 &&
		(fd_make = open("main.c", O_RDONLY) != -1) &&
		(fd_h = open("get_next_line.h", O_RDONLY)) != -1)
		
	{
		while (get_next_line(fd_c, &line) > 0 && i < NB_LINE)
		{
			ft_putstr("Ligne ");
			ft_putnbrendl(i);
			ft_putendl(line);
			ft_strdel(&line);
			i++;
		}
	}
	return (0);
}
