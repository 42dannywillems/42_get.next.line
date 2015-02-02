/**
 * DO NOT USE. NOT TESTED AND ALGORITHM NOT CHECKED.
 */

#include "libft.h"

t_bstree	*gs_bstree_predecessor(	t_bstree *bstree, void *data,
									int cmp(void *, void *))
{
	t_bstree *tmp;
	
	tmp = gs_bstree_find(bstree, data, cmp);
	if (tmp)
		return (tmp->parent);
	else
		return (NULL);
}
