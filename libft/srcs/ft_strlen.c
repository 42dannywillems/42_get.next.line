/**
 * \file ft_strlen.c
 * \author Danny Willems
 *
 * \fn char *ft_strlen(char *dest, const char *src)
 * \brief Same as strlen in the standard library
 *
 * strlen implementation. Return 0 if the argument is NULL.
 */

#include "libft.h"

size_t		ft_strlen(const char *str)
{
	count_t i;

	ISNULL_ZERO(str);
	i = 0;
	while (str[i])
		i++;
	return (i);
}
