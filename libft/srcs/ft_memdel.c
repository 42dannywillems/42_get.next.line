#include "libft.h"

void	ft_memdel(void **a)
{
	if (a && *a)
	{
		free(*a);
		*a = NULL;
	}
}
