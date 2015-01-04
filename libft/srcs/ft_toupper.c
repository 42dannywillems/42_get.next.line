#include "libft.h"

int		ft_toupper(int c)
{
	if (ft_islowercase(c))
		c -= 32;
	return (c);
}
