/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:33:57 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/10/15 13:18:53 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_bzero(void *str, size_t len)
{
	size_t			index;
	unsigned char	*ptr;

	index = 0;
	ptr = str;
	while (index < len)
		ptr[index++] = '\0';
}
