/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_stack_push_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:03 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:02:23 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*gs_stack_push(t_stack *list, void *data)
{
	if (list)
	{
		if (list->data)
			return ((list = gs_stack_create(data, list)));
		else
		{
			list->data = data;
			return (list);
		}
	}
	return ((list = gs_stack_create(data, NULL)));
}
