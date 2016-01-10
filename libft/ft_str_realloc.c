/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_realloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:43:35 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 12:44:55 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_realloc(char *ptr, size_t new_size)
{
	char *newptr;

	ISNULL(ptr);
	ISZERO_NULL(new_size);
	if ((newptr = ft_strnew(new_size)))
	{
		ft_strncpy(newptr, ptr, new_size);
		ft_strdel(&ptr);
	}
	return (newptr);
}
