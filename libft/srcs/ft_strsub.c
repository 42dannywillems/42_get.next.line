/**
 * \file ft_strsub.c
 * \author Danny Willems
 *
 * \fn char *ft_strsub(char const *s, unsigned int start, size_t len)
 * \brief Return a new string containing data from s + start to s + start + len.
 *
 * Return a new string containing data from s + start to s + start + len.
 * Return NULL if s is NULL or if there's an allocation error.
 */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*n_s;

	s_len = ft_strlen(s);
	if (start + len <= s_len
		&& (n_s = ft_strnew(len)))
	{
		n_s = ft_strncpy(n_s, s + start, len);
		return (n_s);
	}
	else
		return (NULL);
}
