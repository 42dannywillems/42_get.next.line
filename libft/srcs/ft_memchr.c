/**
 * \file ft_memchr.c
 * \author Danny Willems
 *
 * \fn void *ft_memchr(const void *s, int c, size_t n)
 * \brief Same as memchr in the standard library
 *
 * memchr implementation.
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;

	ISNULL(s);
	uc_s = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*uc_s == (unsigned char)c)
			return (uc_s);
		uc_s++;
	}
	return (NULL);
}
