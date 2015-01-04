#include "libft.h"

size_t		ft_array_len(const char **s)
{
	count_t i;

	i = 0;
	while (ft_strequ(s[i], "\0") == FALSE)
		i++;
	return (i);
}
