/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:04 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:03:32 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	gs_slist_size(const t_slist *list)
{
	if (gs_slist_isempty(list))
		return (0);
	else
		return (1 + gs_slist_size(list->next));
}
