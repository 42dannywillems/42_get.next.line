/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_info.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:33:17 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:34:37 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print [n] times the character [c] as an info message (cyan color = KCYN).
*/

#include "libft.h"

void	ft_putnchar_info(char c, size_t n)
{
	t_count i;

	i = 0;
	ft_putstr(KCYN);
	while (i++ < n)
		ft_putchar(c);
	ft_putstr(KNRM);
}
