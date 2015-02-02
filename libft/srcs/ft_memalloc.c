/**
 * \file ft_memalloc.c
 * \author Danny Willems
 *
 * \fn void *ft_memalloc(size_t size)
 * \brief Same as memalloc in the standard library
 *
 * memalloc implementation.
 *
 * NULL is checked in ft_memset.
 * So don't need to check before ft_memset
 */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *s;

	s = malloc(size);
	s = ft_memset(s, 0, size);
	return (s);
}
