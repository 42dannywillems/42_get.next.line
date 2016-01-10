/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 13:58:44 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 13:58:57 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	ISNULL_ZERO(s1);
	ISNULL_ZERO(s2);
	if (*s2)
		return (ft_strncmp(s1, s2, n) == 0);
	else
		return (TRUE);
}
