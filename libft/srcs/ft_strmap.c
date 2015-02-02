/**
 * \file ft_strmap.c
 * \author Danny Willems
 *
 * \fn char *ft_strmap(char *s, char (*f)(char *))
 * \brief Apply f to each element of s, and replace it with the result.
 *
 * Replace each element of s with the return of the application f on this
 * element. 
 * Modify the string s.
 */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *n_s;
	count_t i;

	ISNULL(s);
	n_s = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		n_s[i] = (*f)(s[i]);
		i++;
	}
	return (n_s);
}
