#include "libft.h"

bool_t		ft_isechapcarac(int c)
{
	return (c == ' ' ||
			c == '\t' ||
			c == '\n' ||
			c == '\r' ||
			c == '\v' ||
			c == '\f');
}
