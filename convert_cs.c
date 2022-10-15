/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_cs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 09:34:29 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/10/15 09:34:32 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*convert_c(char c, t_prnt *spec);
char	*convert_s(char *str, t_prnt *spec);

char	*convert_c(char c, t_prnt *spec)
{
	char	*str;

	str = ft_calloc(sizeof(char), 2);
	if (!str)
		return (NULL);
	str[0] = c;
	spec->str_len = (int)ft_strlen(str);
	spec->type = 'c';
	if (c == 0)
	{
		str[0] = '\0';
		spec->str_len = 1;
	}
	if (spec->width > spec->str_len)
		ft_put_flag(str, spec);
	else
		ft_putchar_fd(*str, 1);
	return (str);
}

char	*convert_s(char *str, t_prnt *spec)
{
	if (!str)
		str = "(null)";
	spec->str_len = (int)ft_strlen(str);
	spec->type = 's';
	if (spec->pcs == 0 && spec->width == 0 && *str == 0)
		spec->len -= spec->str_len;
	else if (spec->pcs != -2)
		ft_put_pcs(str, spec);
	else if (spec->width >= spec->str_len)
	{
		if (spec->flag1 == ' ')
		{
			ft_putchar_fd(spec->flag1, 1);
			spec->len++;
			ft_putstr_fd(str, 1);
		}
		else
			ft_put_flag(str, spec);
	}
	else
		ft_putstr_fd(str, 1);
	return (str);
}
