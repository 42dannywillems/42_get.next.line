#include "libft.h"

t_bstree	*gs_bstree_min(t_bstree *bstree)
{
	ISNULL(bstree);
	ISNULL(bstree->left);
	return (gs_bstree_min(bstree->left));
}
