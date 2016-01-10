/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_find_max.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:17:25 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:01:30 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*gs_slist_find_max(t_slist *list, int (*cmp)(void *, void *))
{
	t_slist *max;

	if (!gs_slist_isempty(list))
	{
		max = list;
		while (list->next)
		{
			if (cmp(max->data, list->data) > 0)
				max = list;
			list = list->next;
		}
		return (max);
	}
	else
		return (NULL);
}
