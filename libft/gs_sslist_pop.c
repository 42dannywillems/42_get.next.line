/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslist_pop.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:02 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 15:59:48 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_sslist	*gs_sslist_pop(t_sslist **list)
{
	t_sslist *ret;

	if (gs_sslist_isempty(*list))
		return (NULL);
	ret = *list;
	*list = (*list)->next;
	return (ret);
}
