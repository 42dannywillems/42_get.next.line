/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 11:44:59 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 11:45:31 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		nbre;
	t_count	i;
	int		signe;

	i = 0;
	nbre = 0;
	signe = 1;
	while (ft_isechapcarac(str[i]))
		i++;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		nbre *= 10;
		nbre += (str[i] - '0');
		i++;
	}
	return (signe * nbre);
}
