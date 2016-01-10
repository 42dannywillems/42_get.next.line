/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:04 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:03:19 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*gs_slist_reverse(t_slist *list)
{
	t_slist *previous;
	t_slist *tmp;

	previous = NULL;
	tmp = NULL;
	while (list)
	{
		tmp = list->next;
		list->next = previous;
		previous = list;
		list = tmp;
	}
	return (previous);
}
