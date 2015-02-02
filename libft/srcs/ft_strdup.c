/**
 * \file ft_strdup.c
 * \author Danny Willems
 *
 * \fn char *ft_strdup(const char *s1)
 * \brief Same as strdup in the standard library
 *
 * strdup implementation. Return NULL if one of the arguments is NULL.
 */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	return (ft_strcpy(ft_strnew(ft_strlen(s1)), s1));
}

