#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	count_t i;
	count_t j;

	ISNULL(dest);
	ISNULL(src);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
