/**
 * \file ft_strsplit.c
 * \author Danny Willems
 *
 * \fn char **ft_strsplit(const char *str, char c)
 * \brief Split str into an array of char. The split character is c.
 *
 * Split str into an array of char. The split character is c.
 */

#include "libft.h"

char	**ft_strsplit(const char *str, char c)
{
	return (ft_strsplit_str(str, &c));
}
