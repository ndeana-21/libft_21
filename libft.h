/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 02:03:23 by ndeana            #+#    #+#             */
/*   Updated: 2020/06/10 00:00:55 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

void				*ft_memset(void *s, int c, size_t n);
void				*ft_memcpy(void *to, const void *from, size_t n);
void				*ft_memccpy(void *to, const void *from, int c, size_t n);
void				*ft_memmove(void *to, const void *from, size_t n);
void				*ft_memchr(const void *arr, int c, size_t n);
int					ft_memcmp(const void *to, const void *from, size_t n);

size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char *to, const char *from, size_t n);
size_t				ft_strlcat(char *to, const char *from, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *s, const char *find, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int					ft_atoi(char *s);
char				*ft_itoa(int n);

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				ft_bzero(void *b, size_t n);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s);

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

/*
**
**	personal functions
**
*/

void				ft_strrev(char *s);

int					ft_pow(int x, int y);
float				ft_invsqrt(float x);
float 				ft_sqrt(float x);
long double			ft_min(long double *x, size_t len);
long double			ft_max(long double *x, size_t len);

#endif