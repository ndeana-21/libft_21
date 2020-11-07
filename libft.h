/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 02:03:23 by ndeana            #+#    #+#             */
/*   Updated: 2020/11/07 14:22:51 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define FD_SIZE		65535
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	255
# endif
# include <unistd.h>
# include <stdlib.h>

char					*ft_strncut(char *s, size_t n);
char					*ft_strchr(const char *s, int c);
char					*ft_strnstr(const char *s, const char *find, size_t n);
char					*ft_strrchr(const char *s, int c);
char					*ft_strpass(char *str, char *sample);
int						ft_strmatch(char *s1, char *s2);
int						ft_strsample(const char *str, const char *sample);
int						ft_atoi(char *s);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_strcmp(const char *s1, const char *s2);
size_t					ft_strlcat(char *to, const char *from, size_t n);
size_t					ft_strlcpy(char *to, const char *from, size_t n);
size_t					ft_strlen(const char *s);

int						ft_memcmp(const void *to, const void *from, size_t n);
void					*ft_memccpy(void *to, const void *from, int c, size_t n);
void					*ft_memchr(const void *arr, int c, size_t n);
void					*ft_memcpy(void *to, const void *from, size_t n);
void					*ft_memmove(void *to, const void *from, size_t n);
void					*ft_memset(void *s, int c, size_t n);
void					ft_bzero(void *b, size_t n);

int						ft_get_next_line(int fd, char **line);
int						ft_read_fd(int fd, char **line);

char					*ft_itoa(int n);
char					**ft_split(char const *s, char c);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char					*ft_strtrim(char const *s1, char const *set);
char					*ft_substr(char const *s, unsigned int start, size_t len);
char					*ft_strdup(const char *s);
void					*ft_calloc(size_t count, size_t size);
void					*ft_realloc(void *old_alloc, size_t new_size);

void					ft_putchar_fd(char c, int fd);
void					ft_putendl_fd(char *s, int fd);
void					ft_putnbr_fd(int n, int fd);
void					ft_putstr_fd(char *s, int fd);

int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(int c);
int						ft_tolower(int c);
int						ft_toupper(int c);

typedef struct			s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

int						ft_lstsize(t_list *lst);
t_list					*ft_lstlast(t_list *lst);
t_list					*ft_lstnnext(t_list *lst, size_t n);
t_list					*ft_lstmap(t_list *lst, void *(*f)(void *),
							void (*del)(void *));
t_list					*ft_lstnew(void *content);
char					**ft_lsttopage(t_list *lst, int *y);
void					ft_lstadd_back(t_list **lst, t_list *new);
void					ft_lstadd_front(t_list **lst, t_list *new);
t_list					*ft_lstclear(t_list *lst, void (*del)(void*));
t_list					*ft_lstdelone(t_list *lst, void (*del)(void*));
void					ft_lstiter(t_list *lst, void (*f)(void *));

typedef struct			s_dl_list
{
	void				*content;
	struct t_dl_list	*prev;
	struct t_dl_list	*next;
}						t_dl_list;

int						ft_dl_lstsize(t_dl_list *lst);
t_dl_list				*ft_dl_lstlast(t_dl_list *lst);
t_dl_list				*ft_dl_lstfirst(t_dl_list *lst);
t_dl_list				*ft_dl_lstnnext(t_dl_list *lst, size_t n);
t_dl_list				*ft_dl_lstmap(t_dl_list *lst, void *(*f)(void *),
							void (*del)(void *));
t_dl_list				*ft_dl_lstnew(void *content);
char					**ft_dl_lsttopage(t_dl_list *lst, int *y);
void					ft_dl_lstadd_back(t_dl_list **lst, t_dl_list *new);
void					ft_dl_lstadd_front(t_dl_list **lst, t_dl_list *new);
t_dl_list				*ft_dl_lstclear(t_dl_list *lst, void (*del)(void*));
t_dl_list				*ft_dl_lstdelone(t_dl_list *lst, void (*del)(void*));
void					ft_dl_lstiter(t_dl_list *lst, void (*f)(void *));

int						ft_strdel(char **s);
int						ft_pagedel(char ***page, size_t len);
void					**ft_make_da(size_t size, size_t wide, size_t hight);
void					ft_free_da(void	**double_arr, size_t hight);

double					ft_deg(double rad);
double					ft_rad(double deg);

#endif
