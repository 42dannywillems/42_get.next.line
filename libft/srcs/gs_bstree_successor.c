#include "libft.h"

/* No need to check if there's a right child because gs_bstree_min return NULL
 * if the bstree passed as argument is NULL */
t_bstree	*gs_bstree_successor(	t_bstree *bstree, void *data,
									int cmp(void *, void *))
{
	t_bstree *tmp;

	tmp = gs_bstree_find(bstree, data, cmp);
	ISNULL(tmp);
	return (gs_bstree_min(tmp->right));
}
