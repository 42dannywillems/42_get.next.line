#include "gs_slist.h"

t_slist	*gs_slist_find_min(t_slist *list, int (*cmp)())
{
	t_slist *min;

	if (!gs_slist_isempty(list))
	{
		min = list;
		while (list->next)
		{
			if (cmp(min->data, list->data) < 0)
				min = list;
			list = list->next;
		}
		return (min);
	}
	else
		return (NULL);
}
