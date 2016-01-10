/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_info.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:17:06 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:26:25 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print the string [s] as an info message (cyan color = KCYN).
*/

#include "libft.h"

void	ft_putendl_info(char const *s)
{
	ft_putstr(KCYN);
	ft_putstr(s);
	ft_putendl(KNRM);
}
