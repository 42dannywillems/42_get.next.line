/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 13:10:43 by dwillems          #+#    #+#             */
/*   Updated: 2016/01/10 22:07:11 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define ISNULL(x)			if (((x)) == NULL) return (NULL)
# define ISNULL_ZERO(x)		if (((x)) == NULL) return (0)
# define ISZERO(x)			if (((x)) == 0) return (0)
# define ISZERO_NULL(x)		if (((x)) == 0) return (NULL)

/*
** *****************************************************************************
** *****************************************************************************
** GS_TYPEDEF
*/

# define STDIN		0
# define STDOUT		1
# define STDERR		2

# define TRUE		1
# define FALSE		0

# define NOT_FOUND	-1

typedef unsigned int	t_pos;
typedef unsigned int	t_count;
typedef unsigned int	t_bool;

/*
** END OF GS_TYPEDEF
** *****************************************************************************
** *****************************************************************************
*/

/*
** *****************************************************************************
** *****************************************************************************
** GS_COLOR
*/

# define KNRM  "\x1B[0m"
# define KRED  "\x1B[31m"
# define KGRN  "\x1B[32m"
# define KYEL  "\x1B[33m"
# define KBLU  "\x1B[34m"
# define KMAG  "\x1B[35m"
# define KCYN  "\x1B[36m"
# define KWHT  "\x1B[37m"

/*
** END OF GS_COLOR
** *****************************************************************************
** *****************************************************************************
*/

/*
** *****************************************************************************
** *****************************************************************************
** GS_SLIST
*/

typedef struct			s_slist
{
	void				*data;
	struct s_slist		*next;
}						t_slist;

t_slist					*gs_slist_create(void *data, t_slist *next);
void					gs_slist_clear(t_slist **list);
t_slist					*gs_slist_pop(t_slist **list);
t_slist					*gs_slist_delete_nth(t_slist **list, t_pos i);
t_slist					*gs_slist_delete(t_slist *list, void *data,
							int cmp(void *, void *));
t_slist					*gs_slist_delete_first(t_slist *list, void *data,
								int cmp(void *, void *));
size_t					gs_slist_size(const t_slist *list);
t_bool					gs_slist_isempty(const t_slist *list);

t_slist					*gs_slist_push_front(t_slist *list, void *data);
t_slist					*gs_slist_merge(t_slist *list1, t_slist *list2);
t_slist					*gs_slist_reverse(t_slist *list);

t_slist					*gs_slist_at(t_slist *list, t_pos i);
t_slist					*gs_slist_find(t_slist *list, void *data_ref,
						int (*cmp)(void *, void *));
t_slist					*gs_slist_find_max(t_slist *list,
						int (*cmp)(void *, void *));
t_slist					*gs_slist_find_min(t_slist *list,
						int (*cmp)(void *, void *));

/*
** not tested
*/
char					**gs_slist_toarray(t_slist *list, t_bool delete_list);

void					gs_slist_print(t_slist *list);

/*
** END OF GS_SLIST
** *****************************************************************************
** *****************************************************************************
*/

/*
** *****************************************************************************
** *****************************************************************************
** GS_SSLIST
*/

typedef struct			s_sslist
{
	void				*data;
	struct s_sslist		*next;
}						t_sslist;

/*
** Creation, insert and merge
*/
t_sslist				*gs_sslist_create(void *data, t_sslist *next);
t_sslist				*gs_sslist_insert(t_sslist *list, void *data,
								int cmp(void *, void*));
t_sslist				*gs_sslist_merge(t_sslist *list1, t_sslist *list2,
								int cmp(void *, void *));

/*
** Remove functions
*/
t_sslist				*gs_sslist_pop(t_sslist **list);
void					gs_sslist_clear(t_sslist **list);
t_sslist				*gs_sslist_delete_nth(t_sslist **list, t_pos i);
t_sslist				*gs_sslist_delete(t_sslist *list, void *data,
								int cmp(void *, void *));

/*
** size related functions
*/
size_t					gs_sslist_size(const t_sslist *list);
t_bool					gs_sslist_isempty(const t_sslist *list);

/*
** Search related function
*/
t_sslist				*gs_sslist_at(t_sslist *list, t_pos i);
t_sslist				*gs_sslist_find(t_sslist *list, void *data_ref,
										int (*cmp)(void *, void *));

/*
** Print functions
*/
void					gs_sslist_print(t_sslist *list);

/*
** To_check
** char	**gs_sslist_toarray(t_sslist *list, t_bool delete_list);
*/

/*
** END OF GS_SSLIST
** *****************************************************************************
** *****************************************************************************
*/

/*
** *****************************************************************************
** *****************************************************************************
** GS_STACK
*/

typedef struct			s_stack
{
	void				*data;
	struct s_stack		*next;
}						t_stack;

/*
** Creation, insert and merge
*/
t_stack					*gs_stack_create(void *data, t_stack *next);
t_stack					*gs_stack_push(t_stack *list, void *data);
t_stack					*gs_stack_merge(t_stack *list1, t_stack *list2);

/*
** Remove functions
*/
t_stack					*gs_stack_pop(t_stack **list);
void					gs_stack_clear(t_stack **list);

/*
** size related functions
*/
size_t					gs_stack_size(const t_stack *list);
t_bool					gs_stack_isempty(const t_stack *list);

/*
** Print functions
*/
void					gs_stack_print(t_stack *list);

/*
** END OF GS_STACK
** *****************************************************************************
** *****************************************************************************
*/

/*
** *****************************************************************************
** *****************************************************************************
** MATH_42
*/

# define MATH_MAX(a, b) (a < b ? b : a)
# define MATH_MIN(a, b) (a < b ? a : b)

/*
** END OF MATH_42
** *****************************************************************************
** *****************************************************************************
*/

/*
********************************************************************************
** Optional part libft
*/
typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstdelone(t_list **alst,
										void (*del)(void *, size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
/*
********************************************************************************
*/

/*
********************************************************************************
** Array manipulations functions
*/
char					*ft_array_join(const char **s, const char *join);
size_t					ft_array_len(const char **s);
size_t					ft_array_strlen(const char **s);
/*
********************************************************************************
*/

/*
********************************************************************************
** Memory manipulations functions
** ***** Free
*/
void					ft_memdel(void **a);

/*
** ***** Create
*/
void					*ft_memalloc(size_t size);

/*
** ***** Compare
*/
int						ft_memcmp(const void *s1, const void *s2, size_t n);

/*
** ***** Copy & Assign
*/
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memccpy(void *dest, const void *src, int c,
									size_t n);
void					ft_bzero(void *s, size_t n);
void					*ft_memset(void *s, int c, size_t n);
void					*ft_memmove(void *s1, const void *s2, size_t n);

void					*ft_memchr(const void *s, int c, size_t n);
/*
********************************************************************************
*/

/*
********************************************************************************
** String manipulation functions
** ***** Free
*/
void					ft_strdel(char **as);
void					ft_strclr(char *s);

/*
** ***** Create
*/
char					*ft_strnew(size_t size);
char					*ft_strdup(const char *s1);
char					*ft_strndup(const char *src, size_t n);

/*
** ***** Length
*/
size_t					ft_strlen(const char *str);

/*
** ***** Case
*/
int						ft_toupper(int c);
int						ft_tolower(int c);

/*
** ***** Copy & Assign
*/
char					*ft_strcat(char *dest, const char *src);
char					*ft_strncat(char *dest, const char *src, size_t nb);
size_t					ft_strlcat(char *dest, const char *src, size_t size);
char					*ft_strcpy(char *dest, const char *src);
char					*ft_strncpy(char *dest, const char *src, size_t n);

/*
** ***** Function on string
*/
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
									char (*f)(unsigned int, char));

/*
** ***** Compare functions
*/
t_bool					ft_strequ(char const *s1, char const *s2);
t_bool					ft_strnequ(char const *s1, char const *s2, size_t n);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);

/*
** ***** Check functions
*/
t_bool					ft_isalnum(int c);
t_bool					ft_isalpha(int c);
t_bool					ft_isascii(int c);
t_bool					ft_isblankspace(int c);
t_bool					ft_isdigit(int c);
t_bool					ft_isechapcarac(int c);
t_bool					ft_islowercase(int c);
t_bool					ft_isuppercase(int c);
t_bool					ft_isprint(int c);

/*
** ***** Print functions
*/
void					ft_putchar(char c);
void					ft_putchar_err(char c);
void					ft_putchar_info(char c);
void					ft_putchar_succ(char c);
void					ft_putstr(char const *s);
void					ft_putstr_err(char const *s);
void					ft_putstr_info(char const *s);
void					ft_putstr_succ(char const *s);
void					ft_putendl(char const *s);
void					ft_putendl_err(char const *s);
void					ft_putendl_info(char const *s);
void					ft_putendl_succ(char const *s);
void					ft_putnbr(int n);
void					ft_putnbr_err(int n);
void					ft_putnbr_info(int n);
void					ft_putnbr_succ(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr_fd(int n, int fd);
void					ft_putnbrendl(int n);
void					ft_putnbrendl_err(int n);
void					ft_putnbrendl_info(int n);
void					ft_putnbrendl_succ(int n);
void					ft_putnbrendl_fd(int n, int fd);
void					ft_putnendl(const char *c, size_t n);
void					ft_putnendl_err(const char *c, size_t n);
void					ft_putnendl_info(const char *c, size_t n);
void					ft_putnendl_succ(const char *c, size_t n);
void					ft_putnchar(char c, size_t n);
void					ft_putnchar_err(char c, size_t n);
void					ft_putnchar_info(char c, size_t n);
void					ft_putnchar_succ(char c, size_t n);
void					ft_putnstr(const char *c, size_t n);
void					ft_putnstr_err(const char *c, size_t n);
void					ft_putnstr_info(const char *c, size_t n);
void					ft_putnstr_succ(const char *c, size_t n);

/*
** ***** Transformation
*/
char					**ft_strsplit(const char *str, char c);
char					**ft_strsplit_str(const char *str, const char *sep);
char					*ft_strsub(char const *s, unsigned int start,
									size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strjoin_free(char *s1, const char *s2);
int						ft_atoi(const char *str);
char					**ft_splitwhitespaces(const char *str);

/*
** ***** Search
*/
char					*ft_strchr(const char *s, int c);
char					*ft_strnchr(const char *s, int c, size_t n);
int						ft_strchr_p(const char *str, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strnstr(const char *haystack, const char *needle,
									size_t n);
int						ft_strstr_p(const char *haystack, const char *needle);
/*
** *****************************************************************************
*/

/*
** *****************************************************************************
** Integer manipulations functions
*/
char					*ft_itoa(int n);
size_t					ft_intlen(int nb);
/*
** *****************************************************************************
*/

/*
** *****************************************************************************
** To sort
*/
char					*ft_strtrim(char const *s);
/*
** *****************************************************************************
*/

#endif
