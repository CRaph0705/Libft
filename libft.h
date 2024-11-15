/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:28:08 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/15 15:23:53 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<unistd.h>
# include<stdlib.h>
# include<string.h>
# include<stdio.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
				// ft_putchar_fd.c
				// ft_putendl_fd.c
				// ft_putnbr_fd.c
				// ft_putstr_fd.c
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
				// ft_striteri.c
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlen(char *str);
				// ft_strmapi.c
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
#endif