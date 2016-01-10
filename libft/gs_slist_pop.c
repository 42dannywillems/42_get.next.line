/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:02 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 15:59:57 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*gs_slist_pop(t_slist **list)
{
	t_slist *ret;

	if (gs_slist_isempty(*list))
		return (NULL);
	ret = *list;
	*list = (*list)->next;
	return (ret);
}
