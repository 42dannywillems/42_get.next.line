/**
 * \file gs_slist_find_max.c
 * \author Danny Willems
 *
 * \fn t_slist	*gs_slist_find_max(t_slist *list, int (*cmp)())
 * \brief Find max element, and return the node containing it.
 *
 * Return the max value (according to the cmp function) in the linked list
 * beginning with list.
 * -- Describe cmp. Add the void argument it takes --
 */

#include "gs_slist.h"

t_slist	*gs_slist_find_max(t_slist *list, int (*cmp)(void *, void *))
{
	t_slist *max;

	if (!gs_slist_isempty(list))
	{
		max = list;
		while (list->next)
		{
			if (cmp(max->data, list->data) > 0)
				max = list;
			list = list->next;
		}
		return (max);
	}
	else
		return (NULL);
}
