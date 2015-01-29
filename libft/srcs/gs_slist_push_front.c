#include "gs_slist.h"

t_slist	*gs_slist_push_front(t_slist *list, void *data)
{
	if (list)
	{
		if (list->data)
			return (gs_slist_create(data, list));
		else
			list->data = data;
	}
	return ((list = gs_slist_create(data, NULL)));
}
