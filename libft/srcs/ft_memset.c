#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *c_s;

	ISNULL(s);
	c_s = (unsigned char *)s;
	while (n-- > 0)
	{
		*c_s = (unsigned char)c;
		c_s++;
	}
	return (s);
}
