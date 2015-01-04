#include "gs_slist.h"

t_slist	*gs_slist_find(t_slist *list, void *data_ref, int (*cmp)())
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
