/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:10:37 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 22:47:31 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Iter a function [f] on each node of the list pointed by [lst]
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
