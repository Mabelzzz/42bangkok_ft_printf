/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:11:35 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/10/15 09:54:13 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd);
void	ft_put_fl_fd(int cnt, char fl, int fd);
void	ft_put_flag(char *str, t_prnt *spec);
void	ft_put_pcs_nbr(char *str, t_prnt *spec);
void	ft_put_s(int l_put, int cnt, char *str, t_prnt *spec);
void	ft_put_d(int l_put, int cnt, char *str, t_prnt *spec);
void	ft_put_p(int l_put, int cnt, char *str, t_prnt *spec);
void	ft_put_cnt(char *str, t_prnt *spec);
void	ft_put_pcs(char *str, t_prnt *spec);

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

void	ft_put_fl_fd(int cnt, char fl, int fd)
{
	if (fd < 0)
		return ;
	while (cnt-- > 0)
		write(fd, &fl, 1);
}

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

void	ft_put_s(int l_put, int cnt, char *str, t_prnt *spec)
{
	spec->len += l_put;
	if (spec->flag2 == ' ')
		ft_put_fl_fd(l_put, ' ', 1);
	else if (spec->flag2 == '0')
		ft_put_fl_fd(l_put, '0', 1);
	ft_putstrn_fd(str, cnt, 1);
	if (spec->flag2 == '-')
		ft_put_fl_fd(l_put, ' ', 1);
	if (cnt == 0)
		spec->len -= spec->str_len;
	else if (spec->pcs < spec->len)
		spec->len += spec->pcs - spec->str_len;
}

void	ft_put_d(int l_put, int cnt, char *str, t_prnt *spec)
{
	if (l_put + cnt >= 0 && spec->width == spec->pcs && str[0] == '-')
		spec->len += l_put + cnt + 1;
	else if (l_put + cnt >= 0)
		spec->len += l_put + cnt;
	else if (cnt < 0 && l_put + cnt < 0 && spec->pcs == 0)
		spec->len += 0;
	else if ((str[0] == '-' && spec->type == 'd'
			&& spec->pcs == spec->width) || l_put + cnt < 0)
		spec->len += l_put + cnt + 1;
	if (cnt < 0)
	{
		l_put += cnt;
		cnt = 0;
	}
	if (spec->flag2 == '0' || spec->flag2 == ' ')
		ft_put_fl_fd(l_put, ' ', 1);
	if (str[0] == '-')
		ft_putchar_fd('-', 1);
	ft_put_fl_fd(cnt, '0', 1);
	if (str[0] == '-')
		ft_putstr_fd(&str[1], 1);
	else
		ft_putstr_fd(str, 1);
	if (spec->flag2 == '-')
		ft_put_fl_fd(l_put, ' ', 1);
}

void ft_put_p(int l_put, int cnt, char *str, t_prnt *spec)
{
	spec->len += l_put + cnt;
	ft_put_fl_fd(l_put, ' ', 1);
	ft_putstrn_fd(&str[0], 2, 1);
	if (spec->flag2 == '0' || spec->flag2 == '!')
		ft_put_fl_fd(cnt, '0', 1);
	ft_putstr_fd(&str[2], 1);
	if (spec->flag2 == '-')
		ft_put_fl_fd(cnt, ' ', 1);
}

void ft_put_cnt(char *str, t_prnt *spec)
{
	if (spec->pcs == 0 && *str == '0' &&
		(spec->type == 'd' || spec->type == 'u'))
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
	{
		if (str[0] == '-')
			ft_put_d(spec->width - spec->pcs - 1, spec->pcs - spec->str_len + 1, str, spec);
		else
			ft_put_d(spec->width - spec->pcs,
				spec->pcs - spec->str_len, str, spec);
	}
	else if (spec->type == 'p')
	{
		ft_put_p(spec->width - spec->pcs - 2,
			spec->pcs - spec->str_len + 2, str, spec);
	}
	else
		ft_put_pcs_nbr(str, spec);
}

void	ft_put_pcs(char *str, t_prnt *spec)
{
	if (spec->width >= spec->pcs)
		ft_put_cnt(str, spec);
	else if (spec->width < spec->pcs)
	{
		if (spec->pcs >= spec->str_len)
		{
			if (spec->type == 's' && spec->width != 0)
			{
				spec->len += spec->width - spec->str_len;
				if (spec->flag2 != '-')
					ft_put_fl_fd(spec->width - spec->str_len, spec->flag2, 1);
				ft_putstr_fd(str, 1);
				if (spec->flag2 == '-')
					ft_put_fl_fd(spec->width - spec->str_len, ' ', 1);
			}
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
