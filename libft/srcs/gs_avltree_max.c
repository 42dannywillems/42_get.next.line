/**
 * DO NOT USE. NOT TESTED AND ALGORITHM NOT CHECKED.
 */

#include "libft.h"

t_avltree	*gs_avltree_max(t_avltree *avltree)
{
	ISNULL(avltree);
	ISNULL(avltree->right);
	return (gs_avltree_max(avltree->right));
}
