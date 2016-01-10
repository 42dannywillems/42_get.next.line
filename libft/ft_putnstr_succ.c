/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_succ.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:37:17 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:37:40 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print [n] times the string [s] as a success message (green color = KGRN) and
** add a new line at the end.
*/

#include "libft.h"

void	ft_putnstr_succ(char const *c, size_t n)
{
	t_count i;

	ft_putstr(KGRN);
	if (c)
	{
		i = 0;
		while (i++ < n)
			ft_putstr(c);
	}
	ft_putstr(KNRM);
}
