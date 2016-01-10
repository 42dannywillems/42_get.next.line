/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:30:18 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 12:30:22 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *c_s;

	ISNULL(s);
	c_s = (unsigned char *)s;
	while (n-- > 0)
	{
		*c_s = (unsigned char)c;
		c_s++;
	}
	return (s);
}
