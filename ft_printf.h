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
	int		str_len;
}	t_prnt;

void ft_put_p(int l_put, int cnt, char *str, t_prnt *spec);
void	ft_put_cnt(char *str, t_prnt *spec);
void	ft_put_d(int l_put, int cnt, char *str, t_prnt *spec);
void	ft_put_s(int l_put, int cnt, char *str, t_prnt *spec);
void	ft_put_pcs_nbr2(char *str, t_prnt *spec);
void	ft_put_fl_fd(int cnt, char fl, int fd);
void	 ft_put_pcs_nbr(char *str, t_prnt *spec);
// void ft_put_cnt(int bl, char *str, t_prnt *spec);
// void ft_put_cnt(int len, int bl, char *str, t_prnt *spec);
// void ft_put_pcs1(int len, char type, char *str, t_prnt *spec);
// void ft_put_pcs(int len, char *str, t_prnt *spec);
void ft_put_pcs(char *str, t_prnt *spec);
void	ft_putstrn_fd(char *s, int n, int fd);
void ft_put_flag(char *str, t_prnt *spec);
char *convert_c(char c, t_prnt *spec);
char *convert_s(char *str, t_prnt *spec);
char *convert_id(int d, t_prnt *spec);
size_t     strlen_hex(unsigned long ptr);
char    *convert_base(unsigned long ptr);
char    *convert_p(unsigned long ptr, t_prnt *spec);
char    *convert_x(char *fmt, unsigned int x, t_prnt *spec);
char *convert_u(unsigned int u, t_prnt *spec);
void	ft_bzero(void *str, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t len);
// static int	power_ten(int n);
// static int	count_nbr(unsigned int nb);
// static void	get_nbr(unsigned long nb, int count, int i, char *str);
char	*ft_itoa_un(unsigned int n);
// int	power_ten(int n);
// int	count_nbr(int nb);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void printfmt(const char *format, va_list args, t_prnt *spec);
int ft_printf(const char *fmt, ...);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_toupper(char *upper);
int	ft_isdigit(int digit);
int	ft_atoi(char *str);
char    check_priority(char fl, char defult, int cnt);
char *check_type(char *fmt, va_list args, t_prnt *spec);
char *check_width(char *fmt, t_prnt *spec);
char *check_flags1(char *fmt, t_prnt *spec);
char *check_flags2(char *fmt, t_prnt *spec);




#endif