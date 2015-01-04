#include "libft.h"

void	ft_putnendl(char const *c, size_t n)
{
	count_t i;

	i = 0;
	if (c)
	{
		while (i++ < n)
			ft_putendl(c);
	}
}
