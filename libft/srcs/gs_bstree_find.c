/**
 * DO NOT USE. NOT TESTED AND ALGORITHM NOT CHECKED.
 */

#include "libft.h"

t_bstree	*gs_bstree_find(t_bstree *bstree, void *data,
							int cmp(void *, void *))
{
	if (bstree)
	{
		if (cmp(bstree->data, data) == 0)
			return (bstree);
		else if (cmp(bstree->data, data) < 0)
			return (gs_bstree_find(bstree->right, data, cmp));
		else
			return (gs_bstree_find(bstree->left, data, cmp));
	}
	return (NULL);
}
