/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrendl_err.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:10:28 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:25:58 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrendl_err(int nb)
{
	ft_putstr(KRED);
	ft_putnbr(nb);
	ft_putendl(KNRM);
}
