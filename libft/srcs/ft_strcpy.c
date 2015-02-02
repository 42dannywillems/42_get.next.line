/**
 * \file ft_strcpy.c
 * \author Danny Willems
 *
 * \fn char *ft_strcpy(char *dest, const char *src)
 * \brief Same as strcpy in the standard library
 *
 * strcpy implementation. Return NULL if one of the arguments is NULL.
 */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	count_t i;

	ISNULL(dest);
	ISNULL(src);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
