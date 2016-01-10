/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnendl_info.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:30:59 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:31:21 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print [n] times the string [s] as an info message (cyan color = KCYN) and
** add a new line.
*/

#include "libft.h"

void	ft_putnendl_info(char const *c, size_t n)
{
	t_count i;

	i = 0;
	if (c)
	{
		while (i++ < n)
			ft_putendl_info(c);
	}
}
