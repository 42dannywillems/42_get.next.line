/**
 * \file gs_slist_isempty.c
 * \author Danny Willems
 *
 * \fn bool_t gs_slist_isempty(const t_slist *list)
 * \brief Check if the list is empty.
 *
 * Return true if the linked list is empty, else false.
 * A list is empty if its data is NULL or if itself is NULL.
 */

#include "gs_slist.h"

bool_t	gs_slist_isempty(const t_slist *list)
{
	return (list == NULL || list->data == NULL);
}

