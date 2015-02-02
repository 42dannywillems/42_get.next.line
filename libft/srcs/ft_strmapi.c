/**
 * \file ft_strmapi.c
 * \author Danny Willems
 *
 * \fn char *ft_strmapi(char *s, char (*f)(unsigned int, char *))
 * \brief Apply f to each element of s, and replace it with the result.
 *
 * Replace each element of s with the return of the application f on this
 * element, depending on the position.
 * Modify the string s.
 */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *n_s;
	count_t i;

	ISNULL(s);
	n_s = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		n_s[i] = (*f)(i, s[i]);
		i++;
	}
	return (n_s);
}
