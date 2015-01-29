#include "libft.h"

/* 
 * ft_strdel (espescially free) can only be used with strings created by malloc
*/

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
