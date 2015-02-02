/**
 * \file ft_strdel.c
 * \author Danny Willems
 *
 * \fn void ft_strdel(char **as)
 * \brief Free the entire string and set the pointer to NULL.
 *
 * Free the entire string and set the pointer to NULL.
 */

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}
