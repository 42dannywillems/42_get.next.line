/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:44:14 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 12:48:44 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	ISNULL(s);
	while (*s && *s != (unsigned char)c)
		s++;
	if (c == 0)
		return ((char *)s);
	return (*s ? (char *)s : NULL);
}
