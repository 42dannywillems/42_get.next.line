/**
 * \file ft_strnequ.c
 * \author Danny Willems
 *
 * \fn bool_t ft_strnequ(char const *s1, char const *s2, size_t n)
 * \brief Same as strnequ in the standard library
 *
 * strnequ implementation. Return NULL if one of the arguments is NULL.
 */

#include "libft.h"

bool_t		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	ISNULL_ZERO(s1);
	ISNULL_ZERO(s2);
	if (*s2)
		return (ft_strncmp(s1, s2, n) == 0);
	else // Empty string
		return (TRUE);
}
