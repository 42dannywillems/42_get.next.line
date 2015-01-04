#include "libft.h"

char	*ft_strtrim(char const *s)
{
	count_t	i;
	count_t	beg;
	count_t end;
	bool_t	read;

	ISNULL(s);
	i = 0;
	read = FALSE;
	while (s[i] && ft_isblankspace(s[i]))
		i++;
	beg = i;
	end = i;
	while (s[i])
	{
		read = FALSE;
		while(s[i] && ft_isblankspace(s[i]))
			i++;
		while (s[i] && !ft_isblankspace(s[i]))
		{
			i++;
			read = TRUE;
		}
		if (read)
			end = i;
	}
	return (ft_strsub(s, beg, end - beg));
}
