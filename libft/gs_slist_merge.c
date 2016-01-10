/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_merge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:02 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:04:11 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*gs_slist_merge(t_slist *list1, t_slist *list2)
{
	t_slist *ret;

	ret = list2;
	if (list1)
	{
		if (list1->data)
		{
			ret = list1;
			while (list1->next)
				list1 = list1->next;
			list1->next = list2;
		}
		else
			free(list1);
	}
	return (ret);
}
