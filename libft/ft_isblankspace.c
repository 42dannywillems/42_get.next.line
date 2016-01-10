/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblankspace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:09:30 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 22:40:45 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return true if the character c is a blank space. A blank space is a space,
** a tab or a return line character.
*/

#include "libft.h"

t_bool	ft_isblankspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
