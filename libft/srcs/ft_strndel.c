#include "libft.h"

char	*ft_strndel(char **as, size_t n)
{
	count_t i;

	i = 0;
	if (as && *as)
	{
		while (i < n)
		{
			free((*as) + i);
			ft_putchar((*as)[i]);
			i++;
		}
		return (*as + i);
	}
	return (NULL);
}
