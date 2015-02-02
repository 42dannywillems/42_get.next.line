/**
 * \file ft_bzero.c
 * \author Danny Willems
 *
 * \fn void ft_bzero(void *s, size_t n)
 * \brief Same as bzero in the standard library
 *
 * bzero implementation.
 */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
