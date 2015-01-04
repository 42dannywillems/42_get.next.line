#include "gs_slist.h"

t_slist	*gs_slist_find_max(t_slist *list, int (*cmp)(void *, void *))
{
	t_slist *max;

	if (!gs_slist_isempty(list))
	{
		max = list;
		while (list->next)
		{
			if (cmp(max->data, list->data) > 0)
				max = list;
			list = list->next;
		}
		return (max);
	}
	else
		return (NULL);
}
