/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:24:36 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/10/15 16:55:26 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define FLAG1 "#+ "
# define FLAG2 "-0"

typedef struct s_prnt{
	char	flag1;
	char	flag2;
	char	type;
	int		width;
	int		pcs;
	int		len;
	int		str_len;
}	t_prnt;

char	check_priority(char fl, char defult, int cnt);
char	*check_flags1(char *fmt, t_prnt *spec);
char	*check_flags2(char *fmt, t_prnt *spec);
int		nub_nbr(int nb);
char	*check_width(char *fmt, t_prnt *spec);
char	*convert_c(char c, t_prnt *spec);
char	*convert_s(char *str, t_prnt *spec);
char	*convert_id(int d, t_prnt *spec);
char	*convert_u(unsigned int u, t_prnt *spec);
size_t	strlen_hex(unsigned long ptr);
char	*convert_base(unsigned long ptr);
char	*condition_x(char	*str, t_prnt *spec);
char	*convert_x(char *fmt, unsigned int x, t_prnt *spec);
char	*convert_p(unsigned long ptr, t_prnt *spec);
int		ft_atoi(char *str);
void	ft_bzero(void *str, size_t len);
void	*ft_calloc(size_t count, size_t size);
int		ft_isdigit(int digit);
char	*ft_itoa_un(unsigned int n);
char	*ft_itoa(int n);
char	*check_type(char *fmt, va_list args, t_prnt *spec);
void	printfmt(const char *format, va_list args, t_prnt *spec);
int		ft_printf(const char *fmt, ...);
void	ft_put_s(int l_put, int cnt, char *str, t_prnt *spec);
void	ft_put_dixu(int l_put, int cnt, char *str, t_prnt *spec);
void	ft_put_p(int l_put, int cnt, char *str, t_prnt *spec);
void	ft_put_flag(char *str, t_prnt *spec);
void	ft_put_pcs(char *str, t_prnt *spec);
void	ft_putchar_fd(char c, int fd);
void	ft_put_fl_fd(int cnt, char fl, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putstrn_fd(char *s, int n, int fd);
void	ft_put_pcs_nbr(char *str, t_prnt *spec);
void	print_dux(char *str, t_prnt *spec);
void	width_makkwa_pcs(char *str, t_prnt *spec);
void	put_s_ltua(char *str, t_prnt *spec);
void	pcs_makkwa_len(char *str, t_prnt *spec);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_toupper(char *upper);

#endif
