/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isechapcarac.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:09:40 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 22:41:36 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return true is the character [c] is an echap character.
*/

#include "libft.h"

t_bool		ft_isechapcarac(int c)
{
	return (c == ' ' ||
			c == '\t' ||
			c == '\n' ||
			c == '\r' ||
			c == '\v' ||
			c == '\f');
}
