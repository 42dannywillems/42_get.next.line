/**
 * \file ft_strncpy.c
 * \author Danny Willems
 *
 * \fn char *ft_strncpy(char *dest, const char *src, size_t n)
 * \brief Same as strncpy in the standard library
 *
 * strncpy implementation. Return NULL if one of the arguments is NULL.
 */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	count_t i;

	ISNULL(dest);
	ISNULL(src);
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] && i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
