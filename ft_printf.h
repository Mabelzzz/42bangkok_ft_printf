#ifndef FT_PRINTF_H
#   define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
# include <stddef.h>
# include <stdlib.h>
// #include "libft/libft.h"

char *convert_c(char c);
char *convert_id(int d);
size_t     strlen_hex(unsigned long ptr);
char    *convert_base(unsigned long ptr);
char    *convert_p(unsigned long ptr);
char    *convert_x(char *fmt, unsigned int x);
char *convert_u(unsigned int u);
void	ft_bzero(void *str, size_t len);
void	*ft_calloc(size_t count, size_t size);
// static int	power_ten(int n);
// static int	count_nbr(unsigned int nb);
// static void	get_nbr(unsigned long nb, int count, int i, char *str);
char	*ft_itoa_un(unsigned int n);
// int	power_ten(int n);
// int	count_nbr(int nb);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void check_type(char *fmt, va_list args);
int printfmt(const char *format, va_list args);
int ft_printf(const char *fmt, ...);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_toupper(char *upper);



#endif