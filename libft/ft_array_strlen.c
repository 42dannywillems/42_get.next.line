/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:58:58 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 11:43:37 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_array_strlen(const char **s)
{
	t_count	i;
	size_t	size;

	i = 0;
	size = 0;
	while (ft_strequ(s[i], "\0") == FALSE)
	{
		size += ft_strlen(s[i]);
		i++;
	}
	return (size);
}
