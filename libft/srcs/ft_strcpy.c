#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	count_t i;

	ISNULL(dest);
	ISNULL(src);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
