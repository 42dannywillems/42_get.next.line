#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	count_t i;
	count_t j;

	ISNULL(dest);
	ISNULL(src);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
