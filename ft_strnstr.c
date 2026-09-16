/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpokorny <rpokorny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 13:51:21 by rpokorny          #+#    #+#             */
/*   Updated: 2026/09/07 15:52:54 by rpokorny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		k = i;
		while (little[j] && i < len && big[i] == little[j])
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[k]);
		i = k;
		i++;
	}
	return (NULL);
}
