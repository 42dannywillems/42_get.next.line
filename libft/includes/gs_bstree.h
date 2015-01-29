#ifndef GS_BSTREE_H
# define GS_BSTREE_H

#include "libft.h"
#define LEFT 0
#define RIGHT 1

typedef struct		s_bstree 
{
			void			*data;
			struct s_bstree *parent;
			struct s_bstree *left;
			struct s_bstree *right;
			//int			cmp(void *, void *);
			//int				height;
}					t_bstree;
/* ----------  end of struct bstree  ---------- */

/* NOT TESTED !! */

t_bstree	*gs_bstree_create(void *data);
bool_t		gs_bstree_isempty(const t_bstree *bstree);
bool_t		gs_bstree_isleaf(const t_bstree *bstree);
size_t		gs_bstree_height(const t_bstree *bstree);
t_bstree	*gs_bstree_min(t_bstree *bstree);
t_bstree	*gs_bstree_max(t_bstree *bstree);
t_bstree	*gs_bstree_find(t_bstree *bstree, void *data,
							int cmp(void *, void *));
t_bstree	*gs_bstree_insert(	t_bstree *bstree, void *data,
								int cmp(void *, void *));
//t_bstree	*gs_bstree_delete(	t_bstree *bstree, void *data,
//								int cmp(void *, void *));
t_bstree	*gs_bstree_successor(	t_bstree *bstree, void *data,
									int cmp(void *, void *));
t_bstree	*gs_bstree_predecessor(	t_bstree *bstree, void *data,
									int cmp(void *, void *));
//void		*gs_bstree_apply_preorder(t_bstree *bstree, void *data);
//void		*gs_bstree_apply_inorder(t_bstree *bstree, void *data);
//void		*gs_bstree_apply_postorder(t_bstree *bstree, void *data);

void		gs_bstree_print(t_bstree *bstree);

#endif
