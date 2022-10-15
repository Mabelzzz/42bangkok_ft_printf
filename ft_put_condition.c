/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_condition.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:07:52 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/10/15 17:07:56 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_flag(char *str, t_prnt *spec);
void	ft_put_pcs(char *str, t_prnt *spec);

void	ft_put_flag(char *str, t_prnt *spec)
{
	spec->len += spec->width - spec->str_len;
	if (spec->pcs == 0 && *str == '0')
		ft_put_fl_fd(spec->width, spec->flag2, 1);
	else if (spec->flag2 == ' ' || (spec->flag2 == '0' && str[0] != '-'))
	{
		ft_put_fl_fd(spec->width - spec->str_len, spec->flag2, 1);
		if (spec->type == 'c')
			ft_putchar_fd(*str, 1);
		else
			ft_putstr_fd(str, 1);
	}
	else if (spec->flag2 == '-')
	{
		if (spec->type == 'c')
			ft_putchar_fd(*str, 1);
		else
			ft_putstr_fd(str, 1);
		ft_put_fl_fd(spec->width - spec->str_len, ' ', 1);
	}
	else
	{
		ft_putchar_fd('-', 1);
		ft_put_fl_fd(spec->width - spec->str_len, spec->flag2, 1);
		ft_putstr_fd(&str[1], 1);
	}
}

void	ft_put_pcs(char *str, t_prnt *spec)
{
	if (spec->width >= spec->pcs)
		width_makkwa_pcs(str, spec);
	else if (spec->width < spec->pcs)
	{
		if (spec->pcs >= spec->str_len)
			pcs_makkwa_len(str, spec);
		else
		{
			if (spec->type == 's')
			{
				spec->len -= spec->str_len - spec->pcs;
				ft_putstrn_fd(str, spec->pcs, 1);
			}
			else
				ft_putstr_fd(str, 1);
		}
	}
}
