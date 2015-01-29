#include "libft.h"

t_avltree	*gs_avltree_predecessor(	t_avltree *avltree, void *data,
									int cmp(void *, void *))
{
	t_avltree *tmp;
	
	tmp = gs_avltree_find(avltree, data, cmp);
	if (tmp)
		return (tmp->parent);
	else
		return (NULL);
}
