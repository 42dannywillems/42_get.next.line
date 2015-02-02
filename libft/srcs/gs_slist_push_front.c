/**
 * \file gs_slist_push_front.c
 * \author Danny Willems
 *
 * \fn t_slist *gs_slist_push_front(t_slist *list, void *data)
 * \brief Insert data at the beginning of the list
 *
 * Create a new element containing data. List is assigned to the new element
 * created.
 * If list->data is NULL, it is set to data.
 */

#include "gs_slist.h"

t_slist	*gs_slist_push_front(t_slist *list, void *data)
{
	if (list)
	{
		if (list->data)
			return ((list = gs_slist_create(data, list)));
		else
		{
			list->data = data;
			return (list);
		}
	}
	return ((list = gs_slist_create(data, NULL)));
}
