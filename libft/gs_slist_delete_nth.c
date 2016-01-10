/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_delete_nth.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:00 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:01:11 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*gs_slist_delete_nth(t_slist **list, t_pos i)
{
	t_slist *ret;
	t_slist *previous;
	t_slist *data;

	previous = NULL;
	data = NULL;
	ret = *list;
	if (i == 0)
		return (gs_slist_pop(list));
	while (i > 0 && *list)
	{
		previous = *list;
		*list = (*list)->next;
		i--;
	}
	if (i == 0)
	{
		data = *list;
		if (*list)
			previous->next = (*list)->next;
		else
			previous->next = NULL;
	}
	*list = ret;
	return (data);
}
