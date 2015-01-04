#include "libft.h"

char	*ft_getnext_line()
{
	return (ft_getnext_line_fd(STDIN));
}
