#include "libft.h"

int		ft_strchr_p(const char *str, int c)
{
	count_t i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (NOT_FOUND);
}
