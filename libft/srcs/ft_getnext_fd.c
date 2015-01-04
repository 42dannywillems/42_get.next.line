#include "libft.h"

char	*ft_getnext_fd(int fd, const char *needle)
{
	char	buf[BUFSIZE + 1];
	char	*str;
	char	*tmp_str;
	count_t	k;
	int		red;
	int		pos;
	bool_t	end;

	end = FALSE;
	str = "\0";
	while (!end)
	{
		red = read(fd, buf, BUFSIZE);
		if (red == -1)
			return (NULL);
		pos = ft_strstr_p(buf, needle);
		if (pos == NOT_FOUND)
			pos = red;
		else
			end = TRUE;
		tmp_str = ft_strcat(ft_strnew(k * BUFSIZE + pos), str);
		//ft_strdel(&str);
		str = ft_strncat(tmp_str, buf, pos);

		k++;
	}
	// on repositionne le curseur si on a trop lu
	//lseek(fd, pos - BUFSIZE, SEEK_CUR);
	return (str);
}
