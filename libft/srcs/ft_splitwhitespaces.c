#include "libft.h"

char **ft_splitwhitespaces(const char *str)
{
	return (ft_strsplit(str, ' '));
}
