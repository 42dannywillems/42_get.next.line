#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

#include "gs_typedef.h"
#include "gs_slist.h"
#include "gs_stack.h"

# define ISNULL(x) if (((x)) == NULL) return (NULL)

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/* Array manipulations functions */
char	*ft_array_join(const char **s, const char *join);
size_t	ft_array_len(const char **s);
size_t	ft_array_strlen(const char **s);
/* End array manipulations functions */

/* Memory manipulations functions */
// Free
void	ft_memdel(void **a);

// Create
void	*ft_memalloc(size_t size);

// Compare
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// Copy & Assign
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);
/* End memory manipulations functions */

/* String manipulation functions */
// Free
void	ft_strdel(char **as);
void	ft_strclr(char *s);

// Create
char	*ft_strnew(size_t size);
char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *src, size_t n);

// Length
size_t	ft_strlen(const char *str);

// Case
int		ft_toupper(int c);
int		ft_tolower(int c);

// Copy & Assign
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t nb);
char	*ft_strlcat(char *dest, const char *stc, size_t size);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);

// Function on string
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// Compare functions
bool_t	ft_strequ(char const *s1, char const *s2);
bool_t	ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// Check functions
bool_t	ft_isalnum(int c);
bool_t	ft_isalpha(int c);
bool_t	ft_isascii(int c);
bool_t	ft_isblankspace(int c);
bool_t	ft_isdigit(int c);
bool_t	ft_isechapcarac(int c);
bool_t	ft_islowercase(int c);
bool_t	ft_isuppercase(int c);
bool_t	ft_isprint(int c);

// Print functions
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbrendl(int n);
void	ft_putnbrendl_fd(int n, int fd);
void	ft_putnendl(const char *c, size_t n);
void	ft_putnchar(char c, size_t n);
void	ft_putnstr(const char *c, size_t n);

// Transformation
char	**ft_strsplit(const char *str, char c);
char	**ft_strsplit_str(const char *str, const char *sep);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_atoi(const char *str);
char	**ft_splitwhitespaces(const char *str);

// Search
char	*ft_strchr(const char *s, int c);
char	*ft_strnchr(const char *s, int c, size_t n);
int		ft_strchr_p(const char *str, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
int		ft_strstr_p(const char *haystack, const char *needle);
/* End string manipulations functions */

/* File manipulations functions */
// Reading
char	*ft_getnext(const char *needle);
char	*ft_getnext_fd(int fd, const char *needle);
char	*ft_getnext_line();
char	*ft_getnext_line_fd(int fd);
char	*ft_getnext_word();
char	*ft_getnext_word_fd(int fd);
/* End file manipulations functions */


/* Integer manipulations functions */
char	*ft_itoa(int n);
size_t	ft_intlen(int nb);
/* End integer manipulations functions */

/* To sort */
char	*ft_strtrim(char const *s);
#endif
