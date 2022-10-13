/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:26:45 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/10/05 21:03:21 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_atoi(char *str)
{
	int	index;
	int	result;
	int	minus;

	minus = 1;
	index = 0;
	result = 0;
	while ((str[index] == '\t' || str[index] == '\n' || str[index] == '\v'
			|| str[index] == '\f' || str[index] == '\r' || str[index] == ' '))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			minus *= -1;
		index++;
	}
	while (str[index] >= 48 && str[index] <= 57)
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	return (minus * result);
}
