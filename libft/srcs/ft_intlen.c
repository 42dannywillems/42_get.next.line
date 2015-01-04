#include "libft.h"

size_t		ft_intlen(int nb)
{
	if (nb >= 10 || nb <= -10)
		return (1 + ft_intlen(nb / 10));
	else
		return (1);
}
