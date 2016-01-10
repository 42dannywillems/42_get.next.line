/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:11:06 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 23:00:20 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Create a new list which node is the result of the function [f] applied
** on the nodes of [lst].
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*new_next;

	if (lst)
	{
		if (lst->next)
		{
			if ((new_next = ft_lstmap(lst->next, f)))
			{
				new = f(lst);
				new->next = ft_lstmap(lst->next, f);
			}
			else
				return (NULL);
		}
		else
		{
			new = f(lst);
			new->next = NULL;
		}
		return (new);
	}
	return (NULL);
}
