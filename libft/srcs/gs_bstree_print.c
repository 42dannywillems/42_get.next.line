/**
 * DO NOT USE. NOT TESTED AND ALGORITHM NOT CHECKED.
 */

#include "libft.h"

void	gs_bstree_print(t_bstree *bstree)
{
	char *data;

	if (bstree)
	{
		data = (char *)(bstree->data);
		ft_putchar('_');
		ft_putendl(data);
		if (bstree->left)
		{
			ft_putendl("|");
			gs_bstree_print(bstree->left);
		}
		if (bstree->right)
		{
			ft_putendl("|");
			gs_bstree_print(bstree->right);
		}
	}
}

