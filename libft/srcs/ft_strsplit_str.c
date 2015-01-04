#include "libft.h"

char	**ft_strsplit_str(const char *str, const char *sep)
{
	count_t		i;
	size_t		len;
	size_t		len_sep;
	size_t		len_str;
	t_slist		*list;

	ISNULL(str);
	i = 0;
	len_sep = ft_strlen(sep);
	len_str = ft_strlen(str);
	list = NULL;

	while (i < len_str)
	{
		len = 0;
		while (	i < len_str && ft_strnequ(str + i, sep, len_sep))
			i += len_sep;
		while (	i + len < len_str 
				&& ft_strnequ(str + i + len, sep, len_sep) == 0)
			len++;
		if (len > 0)
			list = gs_slist_push_front(list, ft_strsub(str, i, len));
		i += len;
	}
	return (gs_slist_toarray(list, 0));
}
