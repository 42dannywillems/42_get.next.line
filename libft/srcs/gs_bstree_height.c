#include "libft.h"

size_t		gs_bstree_height(const t_bstree *bstree)
{
	if (bstree)
		return (1 + MATH_MAX(	gs_bstree_height(bstree->left),
								gs_bstree_height(bstree->right)));
	else
		return (0);
}
