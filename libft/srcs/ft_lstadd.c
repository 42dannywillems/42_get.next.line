#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && *alst)
	{
		if (new)
			new->next = *alst;
		*alst = new;
	}
}
