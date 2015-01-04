#include "gs_slist.h"

t_slist	*gs_slist_merge(t_slist *list1, t_slist *list2)
{
	t_slist *ret;

	if (list1 && !gs_slist_isempty(list1))
	{
		ret = list1;
		while (list1->next)
			list1 = list1->next;
		list1->next = list2;
	}
	else
		ret = list2;
	return (ret);
}
