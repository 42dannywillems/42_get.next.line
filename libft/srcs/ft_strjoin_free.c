/**
 * \file ft_strjoin_free.c
 * \author Danny Willems
 *
 * \fn char *ft_strjoin_free(char *s1, char const *s2)
 * \brief Join the two string into a new one.
 *
 * Create with ft_strnew a new string, copy the two string s1 and s2 into it
 * and free s1 after joining.
 * See ft_strjoin.c to keep s1.
 */

#include "libft.h"

char	*ft_strjoin_free(char *s1, const char *s2)
{
	char *new;

	if ((new = ft_strjoin(s1, s2)))
		ft_strdel(&s1);
	return (new);
}
