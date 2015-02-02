/**
 * \file ft_striter.c
 * \author Danny Willems
 *
 * \fn void ft_striter(char *s, void (*f)(unsigned int, char *))
 * \brief Apply f to each element of s. The application depends on the position
 * in the string.
 *
 * Apply f to each element of s. The application depends on the position in the
 * string. Do not modify the string s.
 */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	count_t i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			(*f)(i, s + i);
			i++;
		}
	}
}
