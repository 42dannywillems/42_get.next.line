#include "libft.h"
#include "get_next_line.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define NB_LINE 500
int main(int argc, char **argv)
{
	int fd, fd2;
	char *line;
	count_t i;
	char buf[6];

	if (argc >= 2 &&	(fd = open(argv[1], O_RDONLY)) != -1 &&
						(fd2 = open(argv[2], O_RDONLY)) != -1)
	{
		i = 0;
		while (i < NB_LINE)
		{
//			ft_putstr("Ligne ");
//			ft_putnbrendl(i);
			if (get_next_line(fd, &line) > 0)
				ft_putendl(line);
			ft_strdel(&line);

//			read(STDIN, buf, 5);
			if (get_next_line(fd2, &line) > 0)
				ft_putendl(line);
			ft_strdel(&line);

//			read(STDIN, buf, 5);
			i++;
		}
		close(fd);
		close(fd2);
	}
	return (0);
}
