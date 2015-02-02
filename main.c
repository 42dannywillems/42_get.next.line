#include "libft.h"
#include "get_next_line.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define NB_LINE 1
int main(int argc, char **argv)
{
	int		fd;
	int		fd2;
	int		ret;
	count_t	i;
	char	*line;
	char	buf[6];

	if (argc >= 2 &&	(fd = open(argv[1], O_RDONLY)) != -1 &&
						(fd2 = open(argv[2], O_RDONLY)) != -1)
	{
		i = 0;
		while (i < NB_LINE)
		{
//			ft_putstr("Ligne ");
//			ft_putnbrendl(i);
			if ((ret = get_next_line(fd, &line)) > 0)
				ft_putendl(line);
			ft_putnstr("*", 80);
			ft_putendl("");
			ft_putnbrendl(ret);
			ft_strdel(&line);

//			read(STDIN, buf, 5);
			if ((ret = get_next_line(fd2, &line)) > 0)
				ft_putendl(line);
			ft_putnbrendl(ret);
			ft_strdel(&line);

//			read(STDIN, buf, 5);
			i++;
//			ft_putnstr("-", 80);
//			ft_putendl("");
		}
		close(fd);
		close(fd2);
	}
	return (0);
}
