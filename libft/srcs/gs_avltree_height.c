/**
 * DO NOT USE. NOT TESTED AND ALGORITHM NOT CHECKED.
 */

#include "libft.h"

size_t		gs_avltree_height(t_avltree *avltree)
{
	if (avltree)
		return (1 + MATH_MAX(	gs_avltree_height(avltree->left),
								gs_avltree_height(avltree->right)));
	else
		return (0);
}
