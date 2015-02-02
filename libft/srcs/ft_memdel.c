/**
 * \file ft_memdel.c
 * \author Danny Willems
 *
 * \fn void ft_memdel(void **a)
 * \brief Same as memdel in the standard library
 *
 * memdel implementation.
 */

#include "libft.h"

void	ft_memdel(void **a)
{
	if (a && *a)
	{
		free(*a);
		*a = NULL;
	}
}
