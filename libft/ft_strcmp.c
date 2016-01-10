/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:50:01 by dwillems          #+#    #+#             */
/*   Updated: 2016/01/09 19:44:33 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	ISNULL_ZERO(s1);
	ISNULL_ZERO(s2);
	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	if (*c_s1 == 0 && *c_s2 == 0)
		return (0);
	else if (*c_s2 == 0)
		return (1);
	while (*c_s1 && *c_s2 && *c_s1 == *c_s2)
	{
		c_s1++;
		c_s2++;
	}
	return (*c_s1 - *c_s2);
}
