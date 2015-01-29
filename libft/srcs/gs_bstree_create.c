#include "libft.h"

t_bstree	*gs_bstree_create(void *data)
{
	t_bstree	*bstree;

	if ((bstree = (t_bstree *)malloc(sizeof(bstree))))
	{
		bstree->parent = NULL;
		bstree->left = NULL;
		bstree->right = NULL;
		bstree->data = data;
	}
	return (bstree);
}
