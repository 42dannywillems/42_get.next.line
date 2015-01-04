#include "gs_slist.h"

t_slist	*gs_slist_at(t_slist *list, pos_t i)
{
	if (!gs_slist_isempty(list))
		if (i == 0)
			return (list);
		else
			return (gs_slist_at(list->next, i - 1));
	else
		return (NULL);
}

