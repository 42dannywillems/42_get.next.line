/**
 * \file ft_strcat.c
 * \author Danny Willems
 *
 * \fn char *ft_strcat(char *dest, const char *src)
 * \brief Same as strcat in the standard library
 *
 * strcat implementation. Return NULL if one of the arguments is NULL.
 */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	count_t i;
	count_t j;

	ISNULL(dest);
	ISNULL(src);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
