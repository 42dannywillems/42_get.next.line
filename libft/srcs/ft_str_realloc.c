/**
 * \file ft_str_realloc.c
 * \author Danny Willems
 *
 * \fn char *ft_str_realloc(char *ptr, size_t new_size)
 * \brief Realloc a string.
 *
 * Create a new string with size new_size, copy ptr data into it, and free ptr.
 * It returns the pointer to the first element of the new string.
 */

#include "libft.h"

char	*ft_str_realloc(char *ptr, size_t new_size)
{
	char *newptr;

	ISNULL(ptr);
	ISZERO_NULL(new_size);
	if ((newptr = ft_strnew(new_size)))
	{
		ft_strncpy(newptr, ptr, new_size);
		ft_strdel(&ptr);
	}
	return (newptr);
}
