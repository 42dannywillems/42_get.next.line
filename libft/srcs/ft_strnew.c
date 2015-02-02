/**
 * \file ft_strnew.c
 * \author Danny Willems
 *
 * \fn char *ft_strnew(size_t size)
 * \brief Create a new string of size size
 *
 * Create a new_string with size size.
 */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	return ((char *)(ft_memalloc(sizeof(char) * (size + 1))));
}
