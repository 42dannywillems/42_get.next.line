/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isuppercase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:10:00 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 22:42:47 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns true if the character [c] is an upper case letter.
*/

#include "libft.h"

t_bool		ft_isuppercase(int c)
{
	return (65 <= c && c <= 90);
}
