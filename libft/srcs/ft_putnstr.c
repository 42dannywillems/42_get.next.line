#include "libft.h"

void	ft_putnstr(char const *c, size_t n)
{
	count_t i;

	if (c)
	{
		i = 0;
		while (i++ < n)
			ft_putstr(c);
	}
}
