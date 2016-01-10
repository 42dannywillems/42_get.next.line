/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islowercase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:09:47 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 22:42:01 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns true if the character [c] is a lower case character.
*/

#include "libft.h"

t_bool		ft_islowercase(int c)
{
	return (97 <= c && c <= 122);
}
