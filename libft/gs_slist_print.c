/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:03 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 15:58:48 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	gs_slist_print(t_slist *list)
{
	if (!gs_slist_isempty(list))
	{
		ft_putstr((const char *)list->data);
		ft_putstr(" -> ");
		gs_slist_print(list->next);
	}
	else
		ft_putendl("*");
}
