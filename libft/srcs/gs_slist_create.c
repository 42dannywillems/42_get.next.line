#include "gs_slist.h"

t_slist		*gs_slist_create(void *data)
{
	t_slist	*list;

	list = (t_slist *)malloc(sizeof(t_slist));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
