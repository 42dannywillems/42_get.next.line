/**
 * \file ft_memccpy.c
 * \author Danny Willems
 *
 * \fn void *ft_memccpy(void *dest, const void *src, int c, size_t n)
 * \brief Same as memccpy in the standard library
 *
 * memccpy implementation.
 */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;
	count_t			i;

	ISNULL(dest);
	ISNULL(src);
	c_dest	= (unsigned char *)dest;
	c_src	= (unsigned char *)src;
	i		= 0;
	while (i < n)
	{
		if (*c_src == (unsigned char)c)
			return (c_dest + 1);
		*c_dest = *c_src;
		c_dest++;
		c_src++;
		i++;
	}
	return (NULL);
}
