#include "libft.h"

/* NULL is checked in ft_memset.
 * So don't need to check before ft_memset
 * */
void	*ft_memalloc(size_t size)
{
	void *s;

	s = malloc(size);
	s = ft_memset(s, 0, size);
	return (s);
}
