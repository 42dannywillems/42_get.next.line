#include "libft.h"

t_bstree	*gs_bstree_insert(	t_bstree *bstree, void *data,
								int cmp(void *, void *))
{
	t_bstree *tmp;

	if (!gs_bstree_isempty(bstree))
	{
		if (cmp(bstree->data, data) < 0)
		{
			if (bstree->right)
				return (gs_bstree_insert(bstree->right, data, cmp));
			else if ((tmp = gs_bstree_create(data)))
			{
				bstree->right = tmp;
				tmp->parent = bstree;
				return (tmp);
			}
			else
				return (NULL);
		}
		else if (cmp(bstree->data, data) > 0)
		{
			if (bstree->left)
				return (gs_bstree_insert(bstree->left, data, cmp));
			else if ((tmp = gs_bstree_create(data)))
			{
				bstree->left = tmp;
				tmp->parent = bstree;
				return (tmp);
			}
			else
				return (NULL);
		}
		else
			return (bstree);
		return (bstree);
	}
	else
		return (gs_bstree_create(data));
}
