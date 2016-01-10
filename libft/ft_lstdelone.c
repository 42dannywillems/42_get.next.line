/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:09:57 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 22:46:30 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** alst is a pointer to a node and *del is a function which frees the node
** data.
** ft_lstdelone frees the node pointed by alast. *alst is set to null.
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && *alst)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
	}
	if (alst)
		*alst = NULL;
}
