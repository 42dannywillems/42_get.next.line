/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnendl_succ.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:31:25 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:32:01 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print [n] times the string [s] as a success message (green color = KGRN) and
** add a new line.
*/

#include "libft.h"

void	ft_putnendl_succ(char const *c, size_t n)
{
	t_count i;

	i = 0;
	if (c)
	{
		while (i++ < n)
			ft_putendl_succ(c);
	}
}
