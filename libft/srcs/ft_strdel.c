#include "libft.h"

void	ft_strdel(char **as)
{
	count_t i;

	if (as && *as)
	{
		i = 0;
		while ((*as)[i])
		{
			free((*as) + i);
			i++;
		}
		*as = NULL;
	}
}
