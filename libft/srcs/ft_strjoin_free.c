#include "libft.h"

/* Same as strcat but realloc memory to be sure that s1 have enough space.
 * Return pointer to the first character. */
char	*ft_strjoin_free(char *s1, const char *s2)
{
	char *new;

	new = ft_strjoin(s1, s2);
	ft_strdel(&s1);
	
	return (new);
}
