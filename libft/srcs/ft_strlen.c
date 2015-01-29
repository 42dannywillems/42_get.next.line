#include "libft.h"

size_t		ft_strlen(const char *str)
{
	count_t i;

	ISNULL_ZERO(str);
	i = 0;
	while (str[i])
		i++;
	return (i);
}
