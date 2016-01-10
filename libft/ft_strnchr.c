/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:01:27 by dwillems          #+#    #+#             */
/*   Updated: 2016/01/07 14:41:59 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s, int c, size_t n)
{
	if (*s && n > 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		else
			return (ft_strnchr(s + 1, c, n - 1));
	}
	else
		return (NULL);
}
