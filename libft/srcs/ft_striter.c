#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	count_t i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			(*f)(s + i);
			i++;
		}
	}
}
