/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:00 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:03:08 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*gs_slist_find(t_slist *list, void *data_ref,
						int (*cmp)(void *, void *))
{
	if (!gs_slist_isempty(list))
	{
		if (cmp(data_ref, list->data))
			return (gs_slist_find(list->next, data_ref, cmp));
		else
			return (list);
	}
	else
		return (NULL);
}
