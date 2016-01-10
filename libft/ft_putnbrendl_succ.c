/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrendl_succ.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:11:53 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:26:56 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrendl_succ(int nb)
{
	ft_putstr(KGRN);
	ft_putnbr(nb);
	ft_putendl(KNRM);
}
