#include "libft.h"

char	*ft_strnew(size_t size)
{
	return ((char *)(ft_memalloc(size + 1)));
}
