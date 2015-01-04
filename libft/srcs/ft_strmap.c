#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *n_s;
	count_t i;

	ISNULL(s);
	n_s = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		n_s[i] = (*f)(s[i]);
		i++;
	}
	return (n_s);
}
