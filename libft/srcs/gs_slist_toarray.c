#include "libft.h"

char	**gs_slist_toarray(t_slist *list, bool_t delete_list)
{
	char		**array_str;
	size_t		list_size;

	list_size = gs_slist_size(list);
	array_str = (char **)malloc(sizeof(char *) * (list_size + 1));
	if (array_str)
	{
		array_str[list_size] = NULL;
		while (list)
		{
			array_str[list_size - 1] = ft_strdup((char *)(list->data));
			list_size--;
			list = list->next;
		}
	}
	if (delete_list)
		gs_slist_clear(&list);
	return (array_str);

}
