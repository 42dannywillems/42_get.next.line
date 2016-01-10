/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_stack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:04 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 15:59:28 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	gs_stack_size(const t_stack *list)
{
	if (gs_stack_isempty(list))
		return (0);
	else
		return (1 + gs_stack_size(list->next));
}
