#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	ISNULL_ZERO(s1);
	ISNULL_ZERO(s2);
	if (*s1 == 0 && *s2 == 0)
		return (0);
	else if (*s2 == 0) // Empty string
		return (1);
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
