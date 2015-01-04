#include "libft.h"

char	*ft_getnext(const char *needle)
{
	return (ft_getnext_fd(STDIN, needle));
}
