/**
 * \file gs_slist_find.c
 * \author Danny Willems
 *
 * \fn t_slist	*gs_slist_find(t_slist *list, void *data_ref, int (*cmp)())
 * \brief Find the first element containing data_ref.
 *
 * Return the first occurence of data_ref in the list beginning with list.
 * -- Describe cmp. Add the void argument it takes --
 */

#include "gs_slist.h"

t_slist	*gs_slist_find(	t_slist *list, void *data_ref,
						int (*cmp)(void *, void *))
{
	if (!gs_slist_isempty(list))
	{
		if (cmp(data_ref, list->data))
			return (gs_slist_find(list->next, data_ref, cmp));
		else
			return (list);
	}
	else
		return (NULL);
}
