/**
 * \file ft_strchr_p.c
 * \author Danny Willems
 *
 * \fn int ft_strchr_p(const char *str, int c)
 * \brief Return position of the first occurence c in str.
 *
 * Return position of the first occurence c in str. Return -1 if c is not in
 * str.
 */

#include "libft.h"

int		ft_strchr_p(const char *str, int c)
{
	count_t i;

	ISNULL_ZERO(str);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (NOT_FOUND);
}
