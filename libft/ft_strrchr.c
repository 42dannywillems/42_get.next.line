/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:01:45 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 14:02:54 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	t_count	i;

	ISNULL(s);
	ret = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			ret = (char *)(s + i);
		i++;
	}
	if (c == 0)
		return ((char *)(s + i));
	return (ret);
}
