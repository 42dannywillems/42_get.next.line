/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslist_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:54:48 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:03:57 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_sslist		*gs_sslist_insert_empty(t_sslist *list, void *data)
{
	if (list)
		list->data = data;
	else
		list = gs_sslist_create(data, NULL);
	return (list);
}

static t_sslist		*gs_sslist_insert_in(t_sslist *list, void *data,
											int cmp(void *, void *))
{
	t_sslist	*previous;
	t_sslist	*ret;
	int			result;

	ret = list;
	previous = list;
	while (list)
	{
		result = cmp(list->data, data);
		if (result < 0)
		{
			previous = list;
			list = list->next;
		}
		else if (result == 0)
			return (ret);
		else
		{
			previous->next = gs_sslist_create(data, list);
			return (ret);
		}
	}
	previous->next = gs_sslist_create(data, list);
	return (ret);
}

t_sslist			*gs_sslist_insert(t_sslist *list, void *data,
								int cmp(void *, void *))
{
	if (gs_sslist_isempty(list))
		return (gs_sslist_insert_empty(list, data));
	else if (cmp(list->data, data) > 0)
		return (gs_sslist_create(data, list));
	else
		return (gs_sslist_insert_in(list, data, cmp));
}
