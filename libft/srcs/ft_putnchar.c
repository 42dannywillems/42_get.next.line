#include "libft.h"

void	ft_putnchar(char c, size_t n)
{
	count_t i;

	i = 0;
	while (i++ < n)
		ft_putchar(c);
}
