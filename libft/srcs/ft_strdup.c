#include "libft.h"

/* s1 == NULL is not checked because it's done in ft_strcpy and return NULL (and
 * also in * ft_strlen but it returns 0 in this case)
*/
char *ft_strdup(const char *s1)
{
	return (ft_strcpy(ft_strnew(ft_strlen(s1)), s1));
}

