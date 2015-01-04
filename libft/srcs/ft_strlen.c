#include "libft.h"

size_t		ft_strlen(const char *str)
{
	count_t i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}
