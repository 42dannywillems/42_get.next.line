/**
 * \file ft_memcpy.c
 * \author Danny Willems
 *
 * \fn void *ft_memcpy(void *dest, const void *src, size_t n)
 * \brief Same as memcpy in the standard library
 *
 * memcpy implementation.
 */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*c_dest;
	char	*c_src;
	count_t	i;

	ISNULL(dest);
	ISNULL(src);
	c_dest	= (char *)dest;
	c_src	= (char *)src;
	i		= 0;
	while (i < n)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	return (dest);
}
