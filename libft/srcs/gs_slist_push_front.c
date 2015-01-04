#include "gs_slist.h"

t_slist	*gs_slist_push_front(t_slist *list, void *data)
{
	t_slist *tmp;

	if ((tmp = gs_slist_create(data)))
	{
		if (!gs_slist_isempty(list))
			tmp->next = list;
	}
	return (tmp);
}
