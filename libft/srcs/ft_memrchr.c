#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;
	unsigned char	uc_c;

	ISNULL(s);
	uc_s = (unsigned char *)s;
	uc_c = (unsigned char)c;
	while (n-- > 0)
	{
		if (*(uc_s + n) == uc_c)
			return (uc_s + n);
	}
	return (NULL);
}
