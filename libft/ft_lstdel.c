/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:10:17 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 22:45:25 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** alst is a pointer to a node and *del is a function which frees the node
** data.
** ft_lstdel frees all node of the list pointed by alast
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	while (alst && *alst)
	{
		tmp = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = tmp;
	}
	alst = NULL;
}
