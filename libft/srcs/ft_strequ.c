#include "libft.h"

bool_t		ft_strequ(char const *s1, char const *s2)
{
	ISNULL_ZERO(s1);
	ISNULL_ZERO(s2);
	return (ft_strcmp(s1, s2) == 0);
}
