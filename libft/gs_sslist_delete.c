/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslist_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:12:59 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 13:30:44 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_sslist	*gs_sslist_delete(t_sslist *list, void *data,
								int cmp(void *, void *))
{
	t_sslist *tmp;

	if (gs_sslist_isempty(list))
		return (NULL);
	else if (cmp(list->data, data) == 0)
	{
		tmp = list->next;
		free(list);
		tmp = gs_sslist_delete(tmp, data, cmp);
		return (tmp);
	}
	else
	{
		list->next = gs_sslist_delete(list->next, data, cmp);
		return (list);
	}
}
