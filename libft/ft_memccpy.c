/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:12:59 by dwillems          #+#    #+#             */
/*   Updated: 2016/01/09 17:47:08 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;
	t_count			i;

	ISNULL(dest);
	ISNULL(src);
	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*c_dest = *c_src;
		if (*c_src == (unsigned char)c)
			return (c_dest + 1);
		c_dest++;
		c_src++;
		i++;
	}
	return (NULL);
}
