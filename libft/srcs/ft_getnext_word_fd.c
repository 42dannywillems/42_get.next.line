#include "libft.h"

char	*ft_getnext_word_fd(int fd)
{
	return (ft_getnext_fd(fd, " "));
}
