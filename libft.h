/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:07:14 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/07 20:29:16 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size);
int					ft_atoi(char *str);
int					ft_calloc(int n, size_t n);
int					ft_isalpha(int nb);
int					ft_isascii(int nb);
int					ft_isdigit(int nb);
int					ft_isprint(int nb);
int					ft_strlcat(char *dest, char *src, unsigned int size);
int					ft_memcmp(const void *str1, const void *str2, int n);
int					ft_strncmp(char *s1, char *s2, unsigned int n);
int					ft_strlen(char *s);
int					ft_tolower(int nb);
int					ft_toupper(int nb);
void				ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int nb);
void				ft_putstr_fd(char *s, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_itoa(int n);
char				*ft_strchar(char *s, int c);
char				*ft_strdup(char *s);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strnstr(char *str, char *find, size_t n);
char				*ft_strchr(char *s. int c);

#endif
