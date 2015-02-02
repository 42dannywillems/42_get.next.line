/**
 * DO NOT USE. NOT TESTED AND ALGORITHM NOT CHECKED.
 */

#include "libft.h"

t_bstree	*gs_bstree_max(t_bstree *bstree)
{
	ISNULL(bstree);
	ISNULL(bstree->right);
	return (gs_bstree_max(bstree->right));
}
