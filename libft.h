/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:23:37 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:23:37 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *ptr, unsigned int num);
void			*ft_calloc(size_t num, size_t size);
int				ft_isalnum(int chara);
int				ft_isalpha(int chara);
int				ft_isascii(int chara);
int				ft_isdigit(int chara);
int				ft_isprint(int chara);
char			*ft_itoa(int n);
void			*ft_memchr(const void *ptr, int value, unsigned int num);
int				ft_memcmp(const void *ptr1, const void *ptr2, unsigned int num);
void			*ft_memcpy(void *dest, const void *src, unsigned int num);
void			*ft_memmove(void *dest, const void *src, unsigned int num);
void			*ft_memset(void *ptr, int value, unsigned int num);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(const char *str, char sep);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(char *src);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
int				ft_strlen(const char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, unsigned int num);
char			*ft_strnstr(const char *dest, const char *src, unsigned int le);
char			*ft_strrchr(const char *str, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//Bonus
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *ls, void *(*f)(void *), void (*del)(void *));

#endif