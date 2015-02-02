/**
 * \file ft_striter.c
 * \author Danny Willems
 *
 * \fn void ft_striter(char *s, void (*f)(char *))
 * \brief Apply f to each element of s.
 *
 * Apply f to each element of s. Do not modify the string s.
 */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	count_t i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			(*f)(s + i);
			i++;
		}
	}
}
