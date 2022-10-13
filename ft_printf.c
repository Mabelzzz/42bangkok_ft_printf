/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:56:08 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/10/13 13:22:29 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*check_type(char *fmt, va_list args, t_prnt *spec)
{
	char	*str;

	if (*fmt == '%')
		str = convert_c('%', spec);
	else if (*fmt == 'c')
		str = convert_c(va_arg (args, int), spec);
	else if (*fmt == 's')
		str = convert_s(va_arg (args, char *), spec);
	else if (*fmt == 'p')
		str = convert_p(va_arg (args, unsigned long), spec);
	else if (*fmt == 'd' || *fmt == 'i')
		str = convert_id(va_arg (args, int), spec);
	else if (*fmt == 'u')
		str = convert_u(va_arg (args, unsigned int), spec);
	else if (*fmt == 'x' || *fmt == 'X')
		str = convert_x(fmt, va_arg (args, unsigned int), spec);
	else
		str = "";

	
	if (*str == '\0' && *fmt == 'c')
		spec->len += 1;
	else
		spec->len += (int)ft_strlen(str);
	
	if (*fmt != 's')
		 free(str);
		
	return (fmt);
}

void	printfmt(const char *format, va_list args, t_prnt *spec)
{
	char	*fmt;

	fmt = (char *)format;
	while (*fmt)
	{
		if (*fmt == '%' )
		{
			fmt++;
			fmt = check_flags1(fmt, spec);
			fmt = check_flags2(fmt, spec);
			fmt = check_width(fmt, spec);
			fmt = check_type(fmt, args, spec);
		}
		else
		{
			ft_putchar_fd(*fmt, 1);
			spec->len++;
		}
		fmt++;
	}
}

int	ft_printf(const char *fmt, ...)
{
	va_list		args;
	t_prnt		spec;	
	
	spec.flag1 = '!';
	spec.flag2 = ' ';
    spec.type = '!';
	spec.width = -2;
	spec.pcs = -2;
	spec.len = 0;
	spec.str_len = 0;
	if (!fmt)
		return (0);
	va_start(args, fmt);
	printfmt(fmt, args, &spec);
	va_end(args);	
	return (spec.len);
}
