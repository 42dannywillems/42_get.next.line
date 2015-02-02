/**
 * \file gs_slist_print.c
 * \author Danny Willems
 *
 * \fn void gs_slist_print(t_slist *list)
 * \brief Print the list
 *
 * Print the list. It is supposed each data element is a string.
 */

#include "gs_slist.h"
#include "libft.h"

void	gs_slist_print(t_slist *list)
{
	if (!gs_slist_isempty(list))
	{
		ft_putstr((const char *)list->data);
		ft_putstr(" -> ");
		gs_slist_print(list->next);
	}
	else
		ft_putendl("*");
}
