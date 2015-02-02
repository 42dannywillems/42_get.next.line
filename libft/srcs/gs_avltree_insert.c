/**
 * DO NOT USE. NOT TESTED AND ALGORITHM NOT CHECKED.
 */

#include "libft.h"

t_avltree	*gs_avltree_insert(	t_avltree *avltree, void *data,
								int cmp(void *, void *))
{
	t_avltree	*tmp;

	if (avltree)
	{
		if (cmp(avltree->data, data) < 0 && (tmp = gs_avltree_create(data)))
		{
			if (avltree->right)
				return (gs_avltree_insert(avltree->right, data, cmp));
			avltree->right = tmp;
			tmp->parent = avltree;
		}
		else if (cmp(avltree->data, data) > 0 && (tmp = gs_avltree_create(data)))
		{
			if (avltree->left)
				return (gs_avltree_insert(avltree->left, data, cmp));
			avltree->left = tmp;
			tmp->parent = avltree;
		}
		else if (cmp(avltree->data, data) == 0)
			return (avltree);
		else
			return (tmp);
	}
	avltree = gs_avltree_create(data);
	return (avltree);
}
