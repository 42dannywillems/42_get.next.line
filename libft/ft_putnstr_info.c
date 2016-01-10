/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_info.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:36:35 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:37:10 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print [n] times the string [s] as an info message (cyan color = KCYN) and
** add a new line at the end.
*/

#include "libft.h"

void	ft_putnstr_info(char const *c, size_t n)
{
	t_count i;

	ft_putstr(KCYN);
	if (c)
	{
		i = 0;
		while (i++ < n)
			ft_putstr(c);
	}
	ft_putstr(KNRM);
}
