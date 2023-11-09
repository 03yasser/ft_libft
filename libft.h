/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:26:30 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/09 13:12:24 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

void ft_bzero(void *s, size_t n);
int	ft_atoi(const char *str);
size_t ft_strlcat(char *  dst, const char *  src, size_t dstsize);
size_t ft_strlen(const char *s);
void *ft_memcpy(void * dst, const void * src, size_t n);
char *ft_substr(char const *s, unsigned int start,size_t len);
void *ft_calloc(size_t count, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit (int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char * ft_strchr(const char *s, int c);
char *ft_strdup(const char *s1);
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strstr(const char *haystack, const char *needle);
char *ft_strrchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start,size_t len);
int ft_tolower(int c);
int ft_toupper(int c);


#endif