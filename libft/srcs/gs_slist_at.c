/**
 * \file gs_slist_at.c
 * \author Danny Willems
 *
 * \fn t_slist *gs_slist_at(t_slist *list, pos_t i)
 * \brief Get ith node.
 * 
 * Return the node at the position i in the linked list begin with list.
 */

#include "gs_slist.h"

t_slist	*gs_slist_at(t_slist *list, pos_t i)
{
	if (!gs_slist_isempty(list))
		if (i == 0)
			return (list);
		else
			return (gs_slist_at(list->next, i - 1));
	else
		return (NULL);
}
