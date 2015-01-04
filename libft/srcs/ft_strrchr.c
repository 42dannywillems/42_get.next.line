#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	count_t	i;
	
	ISNULL(s);
	ret = NULL;
	i = 0;
	while(s[i])
	{
		if (s[i] == (unsigned char)c)
			ret = (char *)(s + i);
		i++;
	}
	if (c == 0)
		return ((char *)(s + i));
	return (ret);
}
