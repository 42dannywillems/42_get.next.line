/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 13:39:52 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 13:40:02 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool		ft_strequ(char const *s1, char const *s2)
{
	ISNULL_ZERO(s1);
	ISNULL_ZERO(s2);
	return (ft_strcmp(s1, s2) == 0);
}
