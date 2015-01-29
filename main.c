#include "libft.h"
#include "get_next_line.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define NB_LINE 50
int main(int argc, char **argv)
{
	int fd;
	int fd2;
	char *line;
	count_t i;

	i = 0;
	if ((fd = open("get_next_line.c", O_RDONLY)) != -1 &&
		(fd2 = open("get_next_line.h", O_RDONLY)) != -1)
		
	{
		while (get_next_line(fd, &line) > 0 && i < NB_LINE)
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
