#include "libft.h"
#include "get_next_line.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define NB_LINE 500
int main(int argc, char **argv)
{
	int fd;
	char *line;
	count_t i;

	i = 0;
	if (argc >= 1 && (fd = open(argv[1], O_RDONLY)) != -1)
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
