#ifndef FT_PRINTF_H
#   define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
# include <stddef.h>
# include <stdlib.h>
#include <limits.h>

# define LOWER 0
# define UPPER 1
# define FLAG1 "#+ "
# define FLAG2 "-0"
# define DIGIT "0123456789"
# define CONVERSION "cspdiuxX%"

typedef struct s_prnt{
	char	flag1;
	char	flag2;
    char	type;
	int		width;
	int		pcs;
	int		len;
}	t_prnt;

char *convert_c(char c);
char *convert_s(char *str);
char *convert_id(int d);
size_t     strlen_hex(unsigned long ptr);
char    *convert_base(unsigned long ptr);
char    *convert_p(unsigned long ptr);
char    *convert_x(char *fmt, unsigned int x);
char *convert_u(unsigned int u);
void	ft_bzero(void *str, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t len);
int	ft_atoi(const char *str);
// static int	power_ten(int n);
// static int	count_nbr(unsigned int nb);
// static void	get_nbr(unsigned long nb, int count, int i, char *str);
char	*ft_itoa_un(unsigned int n);
// int	power_ten(int n);
// int	count_nbr(int nb);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void check_flags2(char *fmt, va_list args, t_prnt *spec);
int check_type(char *fmt, va_list args);
int printfmt(const char *format, va_list args, t_prnt *spec);
int ft_printf(const char *fmt, ...);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_toupper(char *upper);
int	ft_isdigit(int digit);




#endif