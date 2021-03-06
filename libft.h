/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:01:13 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/25 20:01:16 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memcpy(void *str, const void *scopy, size_t num);
int					ft_atoi(char *str);
void				ft_bzero(void *str, size_t num);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int n);
int					ft_isprint(int c);
void				*ft_memalloc(size_t num);
void				*ft_memccpy(void *str, const void *scopy,
					int k, size_t num);
void				*ft_memchr(const void *str, int c, size_t num);
int					ft_memcmp(const void *str, const void *scom, size_t num);
void				*ft_memcpy(void *str, const void *scopy, size_t num);
void				ft_memdel(void **mem);
void				*ft_memmove(void *str, const void *sss, size_t num);
void				*ft_memset(void *str, int c, size_t num);
void				ft_putchar(char c);
char				*ft_strcat(char *dest, char *src);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(char *s1, char *s2);
char				*ft_strcpy(char *dest, char *src);
void				ft_strdel(char **as);
char				*ft_strdup(char *src);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t				ft_strlcat(char *dest, char *src, size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *dest, char *src, int nb);
int					ft_strncmp(char *s1, char *s2, unsigned int n);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *s1, const char *s2, size_t num);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(char *str, char *to_find);
int					ft_toupper(int c);
int					ft_tolower(int c);
size_t				ft_strlen(const char *s);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strtrim(const char *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_print_s(char *s, char *str);
void				ft_print_i(char *s, int i);
void				ft_print_arr(char **s);

#endif
