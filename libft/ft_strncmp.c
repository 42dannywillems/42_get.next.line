/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 13:57:21 by dwillems          #+#    #+#             */
/*   Updated: 2016/01/09 19:36:31 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	t_count			i;
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	ISNULL_ZERO(s1);
	ISNULL_ZERO(s2);
	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	i = 1;
	if (n == 0)
		return (0);
	while (*c_s1 && *c_s2 && *c_s1 == *c_s2 && i < n)
	{
		c_s1++;
		c_s2++;
		i++;
	}
	return (*c_s1 - *c_s2);
}
