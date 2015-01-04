#include "libft.h"

int		ft_tolower(int c)
{
	if (ft_isuppercase(c))
		c += 32;
	return (c);
}
