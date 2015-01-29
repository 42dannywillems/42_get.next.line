#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char *dest;

	dest = ft_strnew(n);
	if (dest)
		dest = ft_strncpy(dest, src, n);
	return (dest);
}
