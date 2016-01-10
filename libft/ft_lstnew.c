/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:11:27 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 12:11:55 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *n;

	n = (t_list *)malloc(sizeof(t_list));
	if (n)
	{
		if (content)
		{
			n->content = ft_memcpy(ft_memalloc(content_size),
									content, content_size);
			n->content_size = content_size;
		}
		else
		{
			n->content = NULL;
			n->content_size = 0;
		}
		n->next = NULL;
	}
	return (n);
}
