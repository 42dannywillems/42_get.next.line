#include "libft.h"

/* No need to check if there's a right child because gs_avltree_min return NULL
 * if the avltree passed as argument is NULL */
t_avltree	*gs_avltree_successor(	t_avltree *avltree, void *data,
									int cmp(void *, void *))
{
	t_avltree *tmp;

	tmp = gs_avltree_find(avltree, data, cmp);
	ISNULL(tmp);
	return (gs_avltree_min(tmp->right));
}
