/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_stack_merge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:02 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:00:46 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*gs_stack_merge(t_stack *list1, t_stack *list2)
{
	t_stack *ret;

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
