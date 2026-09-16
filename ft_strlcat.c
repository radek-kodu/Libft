/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpokorny <rpokorny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 12:08:50 by rpokorny          #+#    #+#             */
/*   Updated: 2026/09/09 12:41:59 by rpokorny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size && dst[i])
		i++;
	while (src[k])
		k++;
	if (i == size)
		return (size + k);
	if (i < size)
	{
		while (j + i + 1 < size && src[j])
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (i + k);
}
