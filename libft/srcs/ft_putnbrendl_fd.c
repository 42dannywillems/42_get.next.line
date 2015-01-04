#include "libft.h"

void	ft_putnbrendl_fd(int nbr, int fd)
{
	ft_putnbr_fd(nbr, fd);
	ft_putendl_fd("", fd);
}
