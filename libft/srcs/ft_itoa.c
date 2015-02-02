/**
 * \file ft_itoa.c
 * \author Danny Willems
 *
 * \fn char *ft_itoa(int n)
 * \brief Same as itoa in the standard library
 *
 * itoa implementation.
 */

#include "libft.h"

static void	_ft_itoa(char *s, int n, count_t i)
{
	s[i] = '0' + n % 10;
	if (n >= 10)
		_ft_itoa(s, n / 10, i - 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len_str;
	bool_t	NEG;

	len_str = ft_intlen(n);
	if ((NEG = n < 0))
		len_str++;
	str = ft_strnew(len_str);
	{
		if (NEG)
		{
			str[0] = '-';
			n *= -1;
		}
		_ft_itoa(str + NEG, n, len_str - 1 - NEG);
	}
	return (str);
}
