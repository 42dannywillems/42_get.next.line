#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	count_t i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			(*f)(i, s + i);
			i++;
		}
	}
}
