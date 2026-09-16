/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpokorny <rpokorny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 13:45:12 by rpokorny          #+#    #+#             */
/*   Updated: 2026/09/07 16:04:55 by rpokorny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*r;
	size_t			i;

	i = 0;
	p = (unsigned char *)s1;
	r = (unsigned char *)s2;
	while (i < n && p[i] == r[i])
		i++;
	if (i == n)
		return (0);
	return (p[i] - r[i]);
}
