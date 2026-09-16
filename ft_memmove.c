/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpokorny <rpokorny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 16:24:21 by rpokorny          #+#    #+#             */
/*   Updated: 2026/09/07 16:01:20 by rpokorny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*destin;

	i = 0;
	source = (unsigned char *)src;
	destin = (unsigned char *)dest;
	if (destin < source)
	{
		while (i < n)
		{
			destin[i] = source[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			destin[i] = source[i];
		}
	}
	return (destin);
}
