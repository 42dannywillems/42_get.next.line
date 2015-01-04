#include "libft.h"

char	*ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	n;
	size_t	str_src;
	size_t	str_dest;

	str_dest = ft_strlen(dest);
	str_src = ft_strlen(src);
	n = size - str_src;
	if (n <= 0)
		return ((char *)str_dest + str_src);
	else
	{
		while (*dest != '\0')
			dest++;
		while (n > 0)
		{
			n--;
			*dest = *src;
			src++;
			dest++;
		}
		*dest = '\0';
	}
	return ((char *)str_dest + n);
}
