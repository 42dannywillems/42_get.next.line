/**
 * \file gs_slist_size.c
 * \author Danny Willems
 *
 * \fn t_slist *gs_slist_size(t_slist *list)
 * \brief Get the linked list size.
 *
 * Returns list size.
 */

#include "gs_slist.h"

size_t	gs_slist_size(const t_slist *list)
{
	if (gs_slist_isempty(list))
		return (0);
	else
		return (1 + gs_slist_size(list->next));
}
