#include "libft.h"

/* 
 * bstree must not be NULL !!! */

bool_t		gs_bstree_isleaf(const t_bstree *bstree)
{
	return (bstree->left == NULL && bstree->right == NULL);
}
