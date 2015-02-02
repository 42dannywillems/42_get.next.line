/**
 * \file gs_slist_clear.c
 * \author Danny Willems
 *
 * \fn void gs_slist_clear(t_slist **list)
 * \brief Clear list.
 *
 * Free the entire linked list.
 * You need to free manually each data element.
 */

#include "gs_slist.h"

void	gs_slist_clear(t_slist **list)
{
	t_slist *tmp;

	while (*list)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
	*list = NULL;
}
