/**
 * \file ft_memmove.c
 * \author Danny Willems
 *
 * \fn void *ft_memmove(void *s1, const void *s2, size_t n)
 * \brief Same as memmove in the standard library
 *
 * memmove implementation.
 */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char		*p_s1;
	const unsigned char	*p_s2 = s2;

	ISNULL(s1);
	ISNULL(s2);
	if (!n)
		return (s1);
	p_s1 = s1;
	if (p_s2 < p_s1)
	{
		p_s1 += n;
		p_s2 += n;
		while (n--)
			*--p_s1 = *--p_s2;
	}
	else
	{
		while (n--)
			*p_s1++ = *p_s2++;
	}
	return (s1);
}
