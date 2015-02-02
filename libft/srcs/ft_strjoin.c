/**
 * \file ft_strjoin.c
 * \author Danny Willems
 *
 * \fn char *ft_strjoin(char const *s1, char const *s2)
 * \brief Join the two string into a new one.
 *
 * Create with ft_strnew a new string and copy the two string s1 and s2 into it.
 * See ft_strjoin_free to free s1 after joining.
 */

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
		ft_strcpy(n_s + s_s1, s2);
	}
	return (n_s);
}
