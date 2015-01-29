#include "libft.h"

bool_t	ft_isnumber(const char *s)
{
	count_t i;

	ISNULL_ZERO(s);
	i = 0;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
