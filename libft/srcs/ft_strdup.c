#include "libft.h"

/* s1 == NULL is not checked because it's done in ft_strcpy and return NULL (and
 * also in * ft_strlen but it returns 0 in this case)
*/
char *ft_strdup(const char *s1)
{
	char *dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	dest = ft_strcpy(dest, s1);
	return (dest);
}

