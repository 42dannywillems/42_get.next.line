/**
 * DO NOT USE. NOT TESTED AND ALGORITHM NOT CHECKED.
 */

#include "libft.h"

t_avltree	*gs_avltree_find(t_avltree *avltree, void *data,
							int cmp(void *, void *))
{
	if (avltree)
	{
		if (cmp(avltree->data, data) == 0)
			return (avltree);
		else if (cmp(avltree->data, data) < 0)
			return (gs_avltree_find(avltree->right, data, cmp));
		else
			return (gs_avltree_find(avltree->left, data, cmp));
	}
	return (NULL);
}
