/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslist_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:04 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 15:59:40 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	gs_sslist_size(const t_sslist *list)
{
	if (gs_sslist_isempty(list))
		return (0);
	else
		return (1 + gs_sslist_size(list->next));
}
