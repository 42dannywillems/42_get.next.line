/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_find_min.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:01 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:00:12 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*gs_slist_find_min(t_slist *list, int (*cmp)(void *, void *))
{
	t_slist *min;

	if (!gs_slist_isempty(list))
	{
		min = list;
		while (list->next)
		{
			if (cmp(min->data, list->data) < 0)
				min = list;
			list = list->next;
		}
		return (min);
	}
	else
		return (NULL);
}
