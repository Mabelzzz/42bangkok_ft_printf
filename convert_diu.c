/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_diu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 09:33:36 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/10/15 09:33:50 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*convert_id(int d, t_prnt *spec);
char	*convert_u(unsigned int u, t_prnt *spec);

char	*convert_id(int d, t_prnt *spec)
{
	char	*str;

	str = ft_itoa(d);
	if (!str)
		return (NULL);
	spec->str_len = (int)ft_strlen(str);
	spec->type = 'd';
	if (d >= 0 && (spec->flag1 == '+' || spec->flag1 == ' '))
	{
		ft_putchar_fd(spec->flag1, 1);
		spec->len++;
	}
	if (spec->pcs == 0 && spec->width == 0 && *str == 0)
		spec->len -= spec->str_len;
	else if (spec->pcs != -2)
		ft_put_pcs(str, spec);
	else if (spec->width > spec->str_len)
		ft_put_flag(str, spec);
	else
		ft_putstr_fd(str, 1);
	return (str);
}

char	*convert_u(unsigned int u, t_prnt *spec)
{
	char	*str;

	str = ft_itoa_un(u);
	if (!str)
		return (NULL);
	spec->str_len = (int)ft_strlen(str);
	spec->type = 'u';
	if (u > 0 && (spec->flag1 == '+' || spec->flag1 == ' '))
	{
		ft_putchar_fd(spec->flag1, 1);
		spec->len++;
	}
	if (spec->pcs == 0 && spec->width == 0 && *str == 0)
		spec->len -= spec->str_len;
	else if (spec->pcs != -2)
		ft_put_pcs(str, spec);
	else if (spec->width > spec->str_len)
		ft_put_flag(str, spec);
	else
		ft_putstr_fd(str, 1);
	return (str);
}
