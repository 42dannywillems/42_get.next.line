/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_err.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:32:13 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:35:08 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print [n] times the character [c] as an error message (red color = KRED).
*/

#include "libft.h"

void	ft_putnchar_err(char c, size_t n)
{
	t_count i;

	i = 0;
	ft_putstr(KRED);
	while (i++ < n)
		ft_putchar(c);
	ft_putstr(KNRM);
}
