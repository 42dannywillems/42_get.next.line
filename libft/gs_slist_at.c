/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_at.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:12:58 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 15:58:37 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*gs_slist_at(t_slist *list, t_pos i)
{
	if (!gs_slist_isempty(list))
		if (i == 0)
			return (list);
		else
			return (gs_slist_at(list->next, i - 1));
	else
		return (NULL);
}
