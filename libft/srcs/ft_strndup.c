/**
 * \file ft_strndup.c
 * \author Danny Willems
 *
 * \fn char *ft_strndup(const char *src, size_t n)
 * \brief Same as strndup in the standard library
 *
 * strndup implementation. Return NULL if one of the arguments is NULL.
 */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char *dest;

	dest = ft_strnew(n);
	if (dest)
		dest = ft_strncpy(dest, src, n);
	return (dest);
}
