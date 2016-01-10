/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_err.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:35:18 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:37:41 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print [n] times the string [s] as an error message (red color = KRED) and
** add a new line at the end.
*/

#include "libft.h"

void	ft_putnstr_err(char const *c, size_t n)
{
	t_count i;

	ft_putstr(KRED);
	if (c)
	{
		i = 0;
		while (i++ < n)
			ft_putstr(c);
	}
	ft_putstr(KNRM);
}
