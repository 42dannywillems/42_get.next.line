/**
 * \file gs_slist_find_min.c
 * \author Danny Willems
 *
 * \fn t_slist	*gs_slist_find_min(t_slist *list, int (*cmp)())
 * \brief Find min element and return the node containing it.
 *
 * Return the min value (according to the cmp function) in the linked list
 * beginning with list.
 * -- Describe cmp. Add the void argument it takes --
 */

#include "gs_slist.h"

t_slist	*gs_slist_find_min(t_slist *list, int (*cmp)(void *, void *))
{
	t_slist *min;

	if (!gs_slist_isempty(list))
	{
		min = list;
		while (list->next)
		{
			if (cmp(min->data, list->data) < 0)
				min = list;
			list = list->next;
		}
		return (min);
	}
	else
		return (NULL);
}
