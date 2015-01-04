#ifndef GS_STACK_H
# define GS_STACK_H

# define t_stack				t_slist
# define gs_stack_create(x)		gs_slist_create(x)
# define gs_stack_clear(x)		gs_slist_clear(x)

# define gs_stack_size(x)		gs_slist_size(x)
// # define gs_stack_pop(x)		gs_slist_del_at(x, 0)
# define gs_stack_push(x, y)	gs_slist_push_front(x, y)
# define gs_stack_merge(x, y)	gs_slist_merge(x, y)

# define gs_stack_print(x)		gs_slist_print(x)
#endif
