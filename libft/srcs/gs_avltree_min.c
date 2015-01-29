#include "libft.h"

t_avltree	*gs_avltree_min(t_avltree *avltree)
{
	ISNULL(avltree);
	ISNULL(avltree->left);
	return (gs_avltree_min(avltree->left));
}
