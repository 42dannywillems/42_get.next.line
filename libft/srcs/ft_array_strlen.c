#include "libft.h"

size_t	ft_array_strlen(const char **s)
{
	count_t i;
	size_t	size;

	i = 0;
	size = 0;
	while (ft_strequ(s[i], "\0") == FALSE)
	{
		size += ft_strlen(s[i]);
		i++;
	}
	return (size);
}
