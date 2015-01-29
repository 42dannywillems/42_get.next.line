#ifndef GS_AVLTREE_H
# define GS_AVLTREE_H

#include "libft.h"


typedef struct		s_avltree 
{
					struct s_avltree *parent;
					struct s_avltree *left;
					struct s_avltree *right;
					void			*data;
					int				balanced;
}					t_avltree;
/* ----------  end of struct avltree  ---------- */

t_avltree	*gs_avltree_create(void *data);
size_t		gs_avltree_height(t_avltree *avltree);
t_avltree	*gs_avltree_min(t_avltree *avltree);
t_avltree	*gs_avltree_max(t_avltree *avltree);
t_avltree	*gs_avltree_find(t_avltree *avltree, void *data,
							int cmp(void *, void *));
//t_avltree	*gs_avltree_insert(	t_avltree *avltree, void *data,
//								int cmp(void *, void *));
//t_avltree	*gs_avltree_delete(	t_avltree *avltree, void *data,
//								int cmp(void *, void *));
t_avltree	*gs_avltree_successor(	t_avltree *avltree, void *data,
									int cmp(void *, void *));
t_avltree	*gs_avltree_predecessor(	t_avltree *avltree, void *data,
									int cmp(void *, void *));
//void		*gs_avltree_apply_preorder(t_avltree *avltree, void *data);
//void		*gs_avltree_apply_inorder(t_avltree *avltree, void *data);
//void		*gs_avltree_apply_postorder(t_avltree *avltree, void *data);
#endif
