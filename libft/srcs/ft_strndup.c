#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char *dest;

	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (dest)
		dest = ft_strncpy(dest, src, n);
	return (dest);
}
