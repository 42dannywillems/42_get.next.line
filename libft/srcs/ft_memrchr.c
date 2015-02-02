/**
 * \file ft_memrchr.c
 * \author Danny Willems
 *
 * \fn void *ft_memrchr(const void *s, int c, size_t n)
 * \brief Same as memrchr in the standard library
 *
 * memrchr implementation.
 */

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
