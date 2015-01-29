#include "libft.h"

/* Same as strcat but realloc memory to be sure that s1 have enough space.
 * Return pointer to the first character. */
char	*ft_strscat(char *s1, const char *s2)
{
	char *new;

	new = ft_str_realloc(s1, ft_strlen(s1) + ft_strlen(s2));
	return (ft_strcat(new, s2));
}
