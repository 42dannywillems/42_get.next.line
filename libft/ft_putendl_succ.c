/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_succ.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:18:21 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:27:20 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print the string [s] as a success message (green color = KGRN).
*/

#include "libft.h"

void	ft_putendl_succ(char const *s)
{
	ft_putstr(KGRN);
	ft_putstr(s);
	ft_putendl(KNRM);
}
