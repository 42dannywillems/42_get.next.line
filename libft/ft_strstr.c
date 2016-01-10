/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:04:55 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 14:04:55 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	len_needle;
	char	*ret;

	ISNULL(haystack);
	ISNULL(needle);
	ret = (char *)haystack;
	if (*needle == '\0')
		return (ret);
	len_needle = ft_strlen(needle);
	while (*ret)
	{
		ret = ft_strchr(ret, needle[0]);
		if (ret)
		{
			if (ft_strnequ(ret, needle, len_needle))
				return (ret);
			ret++;
		}
		else
			return (ret);
	}
	return (NULL);
}
