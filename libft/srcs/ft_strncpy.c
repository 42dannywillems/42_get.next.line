#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	count_t i;

	ISNULL(dest);
	ISNULL(src);
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] && i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
