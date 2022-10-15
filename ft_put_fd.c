/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:12:03 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/10/15 17:13:00 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd);
void	ft_put_fl_fd(int cnt, char fl, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putstrn_fd(char *s, int n, int fd);

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

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

void	ft_putstrn_fd(char *s, int n, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s && n-- > 0)
	{
		write(fd, s, 1);
		s++;
	}
}
