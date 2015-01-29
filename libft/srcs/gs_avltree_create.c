#include "libft.h"

t_avltree	*gs_avltree_create(void *data)
{
	t_avltree	*avltree;

	if ((avltree = (t_avltree *)malloc(sizeof(avltree))))
	{
		avltree->parent = NULL;
		avltree->left = NULL;
		avltree->right = NULL;
		avltree->data = data;
		avltree->balanced = 0;
	}
	return (avltree);
}
