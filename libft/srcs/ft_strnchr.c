#include "libft.h"

char	*ft_strnchr(const char *s, int c, size_t n)
{
	if (*s && n > 0)
	{
		if (*s == c)
			return ((char *)s);
		else
			return (ft_strnchr(s + 1, c, n - 1));
	}
	else
		return (NULL);
}
