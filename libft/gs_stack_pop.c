/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:02 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:01:45 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*gs_stack_pop(t_stack **list)
{
	t_stack *ret;

	if (gs_stack_isempty(*list))
		return (NULL);
	ret = *list;
	*list = (*list)->next;
	return (ret);
}
