/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:18:38 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 12:18:43 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *uc_s1;
	unsigned char *uc_s2;

	ISNULL_ZERO(s1);
	ISNULL_ZERO(s2);
	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*uc_s1 != *uc_s2)
			return (*uc_s1 - *uc_s2);
		uc_s1++;
		uc_s2++;
	}
	return (0);
}
