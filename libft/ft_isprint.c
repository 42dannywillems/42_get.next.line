/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:09:56 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 22:42:33 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns true if the character [c] is a print character.
*/

#include "libft.h"

t_bool		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
