/* 
 * \file gs_slist_delete_first.c
 * \author Danny Willems
 *
 * \fn t_slist	*gs_slist_delete_first(	t_slist *list, void *data, int cmp())
 * \brief Delete first occurence of data and return it.
 *
 * Delete first occurence data and return it.
 * See gs_slist_delete to delete all occurences data.
 */

#include "libft.h"


t_slist	*gs_slist_delete_first(	t_slist *list, void *data,
								int cmp(void *, void *))
{
	t_slist *tmp;

	if (gs_slist_isempty(list))
		return (NULL);
	else if (cmp(list->data, data) == 0)
	{
		tmp = list->next;
		free(list);
		return (tmp);
	}
	else
	{
		list->next = gs_slist_delete(list->next, data, cmp);
		return (list);
	}
}
