#include "gs_slist.h"

void	gs_slist_clear(t_slist **list)
{
	t_slist *tmp;

	while (*list)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
	*list = NULL;
}
