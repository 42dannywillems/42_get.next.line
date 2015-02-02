/**
 * DO NOT USE. NOT TESTED AND ALGORITHM NOT CHECKED.
 */

#include "libft.h"

bool_t		gs_bstree_isempty(const t_bstree *bstree)
{
	return (!(bstree && bstree->data));
}
