#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	ISNULL(s);
	while (*s && *s != (unsigned char)c)
		s++;
	if (c == 0) // null bytes of s is considered
		return ((char *)s);
	return (*s ? (char *)s : NULL); // *s == 0 if not found --> NULL
}
