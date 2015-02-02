/**
 * \file gs_slist_create.c
 * \author Danny Willems
 *
 * \fn t_slist *gs_slist_create(void *data, t_slist *next)
 * \brief Create a new list.
 *
 * Create a new node with data and next element, and return this new node.
 * Return NULL if there's an error to allocate the t_slist structures.
 */

#include "gs_slist.h"

t_slist		*gs_slist_create(void *data, t_slist *next)
{
	t_slist	*list;

	list = (t_slist *)malloc(sizeof(t_slist));
	if (list)
	{
		list->data = data;
		list->next = next;
	}
	return (list);
}
