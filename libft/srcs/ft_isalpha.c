#include "libft.h"

bool_t		ft_isalpha(int c)
{
	return (ft_isuppercase(c) || ft_islowercase(c));
}
