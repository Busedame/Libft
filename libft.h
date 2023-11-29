/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:16:12 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/28 13:26:02 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <bsd/string.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_atoi(const char *nptr);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strlcat(char *dest, const char *src, size_t size);
int		ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	test_ft_atoi(void);
void	test_ft_bzero(void);
void	test_ft_calloc(void);
void	test_ft_isalnum(void);
void	test_ft_isalpha(void);
void	test_ft_isascii(void);
void	test_ft_isdigit(void);
void	test_ft_isprint(void);
void	test_ft_itoa(void);
void	test_ft_memchr(void);
void	test_ft_memcmp(void);
void	test_ft_memcpy(void);
void	test_ft_memmove(void);
void	test_ft_memset(void);
void	test_ft_putstr_fd(void);
void	test_ft_putchr_fd(void);
void	test_ft_putnbr_fd(void);
void	test_ft_putendl_fd(void);
void	test_ft_split(void);
void	test_ft_strchr(void);
void	test_ft_strdup(void);
void	test_ft_striteri(void);
void	test_ft_strjoin(void);
void	test_ft_strlcat(void);
void	test_ft_strlcpy(void);
void	test_ft_strlen(void);
void	test_ft_strmapi(void);
void	test_ft_strncmp(void);
void	test_ft_strnstr(void);
void	test_ft_strrchr(void);
void	test_ft_strtrim(void);
void	test_ft_substr(void);
void	test_ft_tolower(void);
void	test_ft_toupper(void);
