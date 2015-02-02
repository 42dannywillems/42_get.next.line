/**
 * \file gs_slist_merge.c
 * \author Danny Willems
 *
 * \fn t_slist *gs_slist_merge(t_slist *list1, t_slist *list2)
 * \brief Merge two linked lists.
 *
 * Merge list1 with list2 by adding list2 to the end of list1. It modifies
 * the next attribute of the last node of list1, and return a pointer to the
 * first node of list1.
 * If list1 is NULL, it returns list2;
 * Else if list1->data is NULL, free is applied to list1, and list2 is returned.
 * Else, we go to the last node to list1, and the next attribute is set to
 * list2.
 *
 * NOT TESTED : DO NOT USE.
 */

#include "gs_slist.h"

t_slist	*gs_slist_merge(t_slist *list1, t_slist *list2)
{
	t_slist *ret;

	ret = list2;
	if (list1)
	{
		if (list1->data)
		{
			ret = list1;
			while (list1->next)
				list1 = list1->next;
			list1->next = list2;
		}
		else
			free(list1);
	}
	return (ret);
}
