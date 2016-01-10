/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:09:52 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 22:42:14 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns true if the character [c] is a number.
*/

#include "libft.h"

t_bool	ft_isnumber(const char *s)
{
	t_count i;

	ISNULL_ZERO(s);
	i = 0;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
