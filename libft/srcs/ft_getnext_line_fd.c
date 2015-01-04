#include "libft.h"

char	*ft_getnext_line_fd(int fd)
{
	return (ft_getnext_fd(fd, "\n"));
}
