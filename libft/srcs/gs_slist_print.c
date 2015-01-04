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
