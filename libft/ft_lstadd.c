/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:09:24 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 22:42:56 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Put [new] at the top of the list contained in [alst]
** If *alst is null, alst points to new if new isn't null. Else *alst is not
** changed.
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && *alst)
	{
		if (new)
			new->next = *alst;
		*alst = new;
	}
	else if (alst && new)
		*alst = new;
}
