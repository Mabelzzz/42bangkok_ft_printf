/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:19:51 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/10/15 13:19:54 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_s(int l_put, int cnt, char *str, t_prnt *spec);
void	ft_put_dixu(int l_put, int cnt, char *str, t_prnt *spec);
void	ft_put_p(int l_put, int cnt, char *str, t_prnt *spec);

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

void	ft_put_dixu(int l_put, int cnt, char *str, t_prnt *spec)
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

void	ft_put_p(int l_put, int cnt, char *str, t_prnt *spec)
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
