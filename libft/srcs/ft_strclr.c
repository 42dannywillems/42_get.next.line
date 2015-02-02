/**
 * \file ft_strclr.c
 * \author Danny Willems
 *
 * \fn void ft_strclr(char *s)
 * \brief Assign the zero character to the entire string
 *
 * Assign the zero character to the entire string
 */

#include "libft.h"

void	ft_strclr(char *s)
{
	count_t i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}
