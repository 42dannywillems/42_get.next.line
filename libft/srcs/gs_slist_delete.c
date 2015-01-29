#include "libft.h"

/* 
 * Delete all occurences data.
 * See gs_slist_delete_first to delete first occurence data */

t_slist	*gs_slist_delete(t_slist *list, void *data, int cmp(void *, void *))
{
	t_slist *tmp;

	if (gs_slist_isempty(list))
		return (NULL);
	else if (cmp(list->data, data) == 0)
	{
		tmp = list->next;
		free(list);
		tmp = gs_slist_delete(tmp, data, cmp);
		return (tmp);
	}
	else
	{
		list->next = gs_slist_delete(list->next, data, cmp);
		return (list);
	}
}
