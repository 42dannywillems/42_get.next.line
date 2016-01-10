/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_err.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:12:17 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 20:25:54 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print the string [s] as an error message (red color = KRED).
*/

#include "libft.h"

void	ft_putendl_err(char const *s)
{
	ft_putstr(KRED);
	ft_putstr(s);
	ft_putendl(KNRM);
}
