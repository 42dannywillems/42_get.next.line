#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s_s1;
	size_t	s_s2;
	char	*n_s;

	ISNULL(s1);
	ISNULL(s2);
	s_s1 = ft_strlen(s1);
	s_s2 = ft_strlen(s2);
	if ((n_s = ft_strnew(s_s1 + s_s2)))
	{
		n_s = ft_strcpy(n_s, s1);
		ft_strcpy(n_s + s_s2, s2);
	}
	return (n_s);
}
