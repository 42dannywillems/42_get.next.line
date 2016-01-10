/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslist_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:12:59 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:00:56 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_sslist		*gs_sslist_create(void *data, t_sslist *next)
{
	t_sslist	*list;

	list = (t_sslist *)malloc(sizeof(t_sslist));
	if (list)
	{
		list->data = data;
		list->next = next;
	}
	return (list);
}
