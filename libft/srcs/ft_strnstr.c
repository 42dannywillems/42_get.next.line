/**
 * \file ft_strnstr.c
 * \author Danny Willems
 *
 * \fn char *ft_strnstr(const char *haystack, const char *needle, size_t n)
 * \brief Return a pointer to the first occurence of needle.
 *
 * Return a pointer to the first occurence of needle.
 */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len_needle;
	char	*ret;

	ret = (char *)haystack;
	if (*needle == '\0')
		return (ret);

	len_needle = ft_strlen(needle);
	while (*ret)
	{
		ret = ft_strnchr(ret, needle[0], n);
		if (ret)
		{	
			if (ft_strnequ(ret, needle, len_needle))
				return (ret);
			ret++;
		}
		else
			return (ret);
	}
	return (NULL);
}
