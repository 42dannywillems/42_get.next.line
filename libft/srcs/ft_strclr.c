#include "libft.h"

void	ft_strclr(char *s)
{
	count_t i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}
