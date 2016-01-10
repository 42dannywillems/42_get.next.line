/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_succ.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:34:41 by dwillems          #+#    #+#             */
/*   Updated: 2016/01/09 16:59:15 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print [n] times the character [c] as a success message (green color = KGRN).
*/

#include "libft.h"

void	ft_putnchar_succ(char c, size_t n)
{
	t_count i;

	i = 0;
	ft_putstr(KGRN);
	while (i++ < n)
		ft_putchar(c);
	ft_putstr(KNRM);
}
