/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:55:33 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/09/10 10:11:55 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
	if (dstsize > 0)
	{
		while (dstsize-- > 1 && src[index] != 0)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = 0;
	}
	return (ft_strlen(src));
}
