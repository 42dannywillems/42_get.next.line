/**
 * \file gs_slist_reverse.c
 * \author Danny Willems
 *
 * \fn t_slist *gs_slist_reverse(t_slist *list)
 * \brief Reverse the linked list.
 *
 * Reverse the linked list.
 */

#include "gs_slist.h"

t_slist	*gs_slist_reverse(t_slist *list)
{
	t_slist *previous;
	t_slist *tmp;

	previous = NULL;
	tmp = NULL;
	while (list)
	{
		tmp = list->next;
		list->next = previous;
		previous = list;
		list = tmp;
	}
	return (previous);
}
