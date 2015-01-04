#include "libft.h"

bool_t	ft_isxdigit(int c)
{
	return ((ft_isdigit(c)) || (64 < c && c < 71) || (96 < c && c < 103));
}
