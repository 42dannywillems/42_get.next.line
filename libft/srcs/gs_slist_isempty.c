#include "gs_slist.h"

bool_t	gs_slist_isempty(const t_slist *list)
{
	return (list == NULL || list->data == NULL);
}

