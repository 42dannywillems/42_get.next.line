#include "libft.h"

/* 
 * It doesn't include memory management ! We don't free deleted element !*/

static void		*gs_bstree_delete_min(t_bstree *bstree)
{
	void *data;

	if (gs_bstree_isempty(bstree->left))
	{
		data = bstree->data;
		bstree = bstree->right;
	}
	else
		data = gs_bstree_delete_min(bstree->left);
	return (data);
}

static void		gs_bstree_delete_root(t_bstree *bstree)
{
	if (gs_bstree_isleaf(bstree))
		bstree = NULL;
	else if (gs_bstree_isempty(bstree->left))
		bstree = bstree->right;
	else if (gs_bstree_isempty(bstree->right))
		bstree = bstree->left;
	else
		bstree->data = gs_bstree_delete_min(bstree->right);
}

void	gs_bstree_delete(t_bstree *bstree, void *data, int cmp(void *, void *))
{
	if (!gs_bstree_isempty(bstree))
	{
		if (cmp(data, bstree->data) < 0)
			gs_bstree_delete(bstree->left, data, cmp);
		else if (cmp(data, bstree->data) > 0)
			gs_bstree_delete(bstree->right, data, cmp);
		else
			gs_bstree_delete_root(bstree);
	}

}
