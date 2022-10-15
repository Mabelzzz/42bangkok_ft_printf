/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_flag_pcs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:11:35 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/10/15 17:04:09 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_pcs_nbr(char *str, t_prnt *spec);
void	print_dux(char *str, t_prnt *spec);
void	width_makkwa_pcs(char *str, t_prnt *spec);
void	put_s_ltua(char *str, t_prnt *spec);
void	pcs_makkwa_len(char *str, t_prnt *spec);

void	ft_put_pcs_nbr(char *str, t_prnt *spec)
{
	if (str[0] == '-')
	{
		spec->len += spec->pcs - spec->str_len + 1;
		ft_putchar_fd('-', 1);
		if (spec->flag2 == '0' || spec->flag2 == ' ')
			ft_put_fl_fd(spec->pcs - spec->str_len + 1, spec->flag2, 1);
		ft_putstr_fd(&str[1], 1);
		if (spec->flag2 == '-')
			ft_put_fl_fd(spec->pcs - spec->str_len + 1, spec->flag2, 1);
	}
	else
	{
		if (spec->width > spec->pcs)
			spec->len += spec->width - spec->str_len;
		else
			spec->len += spec->pcs - spec->str_len;
		if (spec->flag2 == '0' || spec->flag2 == ' ')
		{
			ft_put_fl_fd(spec->width - spec->pcs, ' ', 1);
			ft_put_fl_fd(spec->pcs - spec->str_len, '0', 1);
		}	
		ft_putstr_fd(str, 1);
		if (spec->flag2 == '-')
			ft_put_fl_fd(spec->width - spec->str_len, spec->flag2, 1);
	}
}

void	print_dux(char *str, t_prnt *spec)
{
	if (str[0] == '-')
		ft_put_dixu(spec->width - spec->pcs - 1,
			spec->pcs - spec->str_len + 1, str, spec);
	else
		ft_put_dixu(spec->width - spec->pcs,
			spec->pcs - spec->str_len, str, spec);
}

void	width_makkwa_pcs(char *str, t_prnt *spec)
{
	if (spec->pcs == 0 && *str == '0'
		&& (spec->type == 'd' || spec->type == 'u'))
	{
		spec->len += spec->width - 1;
		ft_put_fl_fd(spec->width, ' ', 1);
	}
	else if (spec->type == 's')
	{
		if (spec->width > spec->str_len && spec->pcs >= spec->str_len)
			ft_put_s(spec->width - spec->str_len, spec->str_len, str, spec);
		else
			ft_put_s(spec->width - spec->pcs, spec->pcs, str, spec);
	}
	else if (spec->type == 'd' || spec->type == 'u' || spec->type == 'x')
		print_dux(str, spec);
	else if (spec->type == 'p')
	{
		ft_put_p(spec->width - spec->pcs - 2,
			spec->pcs - spec->str_len + 2, str, spec);
	}
	else
		ft_put_pcs_nbr(str, spec);
}

void	put_s_ltua(char *str, t_prnt *spec)
{
	spec->len += spec->width - spec->str_len;
	if (spec->flag2 != '-')
		ft_put_fl_fd(spec->width - spec->str_len, spec->flag2, 1);
	ft_putstr_fd(str, 1);
	if (spec->flag2 == '-')
		ft_put_fl_fd(spec->width - spec->str_len, ' ', 1);
}

void	pcs_makkwa_len(char *str, t_prnt *spec)
{
	if (spec->type == 's' && spec->width != 0)
		put_s_ltua(str, spec);
	else if (spec->type == 's')
		ft_putstr_fd(str, 1);
	else if (str[0] == '-' && spec->type == 'd')
	{
		spec->len += spec->pcs - spec->str_len + 1;
		ft_putchar_fd('-', 1);
		ft_put_fl_fd(spec->pcs - spec->str_len + 1, '0', 1);
		ft_putstr_fd(&str[1], 1);
	}
	else if (spec->type == 'p')
	{
		spec->len += spec->pcs - spec->str_len + 2;
		ft_putstrn_fd(&str[2], 2, 1);
		ft_put_fl_fd(spec->pcs - spec->str_len + 2, '0', 1);
		ft_putstr_fd(&str[2], 1);
	}
	else
	{
		spec->len += spec->pcs - spec->str_len;
		ft_put_fl_fd(spec->pcs - spec->str_len, '0', 1);
		ft_putstr_fd(str, 1);
	}
}
