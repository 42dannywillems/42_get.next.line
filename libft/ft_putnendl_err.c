/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnendl_err.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:29:06 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:30:42 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print [n] times the string [s] as an error message (red color = KRED) and
** add a new line.
*/

#include "libft.h"

void	ft_putnendl_err(char const *c, size_t n)
{
	t_count i;

	i = 0;
	if (c)
	{
		while (i++ < n)
			ft_putendl_err(c);
	}
}
