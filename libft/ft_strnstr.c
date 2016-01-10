/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 15:15:30 by dwillems          #+#    #+#             */
/*   Updated: 2016/01/07 15:16:51 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len_h)
{
	size_t	len_n;
	int		lr;

	if (*needle == '\0')
		return ((char*)haystack);
	len_n = ft_strlen(needle);
	lr = 1;
	while (len_n <= len_h && *haystack != '\0'
		&& (lr = ft_strncmp(haystack, needle, len_n)))
	{
		len_h--;
		haystack++;
	}
	if (lr != 0)
		return (NULL);
	else
		return ((char *)haystack);
}
