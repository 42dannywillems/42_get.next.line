/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslist_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:03 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 16:01:18 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	gs_sslist_print(t_sslist *list)
{
	if (!gs_sslist_isempty(list))
	{
		ft_putstr((const char *)list->data);
		ft_putstr(" -> ");
		gs_sslist_print(list->next);
	}
	else
		ft_putendl("*");
}
