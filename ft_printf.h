#ifndef FT_PRINTF_H
#   define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
# include <stddef.h>
# include <stdlib.h>
// #include "libft/libft.h"

char    *convert_c(char c);
char    *convert_id(int d);
char    *convert_x(char *fmt, unsigned int x);
char    *convert_p(unsigned long ptr);
char	*ft_itoa_un(unsigned int n);
char	*ft_toupper(char *upper);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *str, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void check_type(char *fmt, va_list args);
int printfmt(const char *format, va_list args);
int ft_printf(const char *fmt, ...);

#endif