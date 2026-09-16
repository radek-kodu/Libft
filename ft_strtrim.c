/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpokorny <rpokorny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 16:34:13 by rpokorny          #+#    #+#             */
/*   Updated: 2026/09/09 12:41:25 by rpokorny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*p;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	end = end - 1;
	if (end == -1)
		return (ft_strdup(""));
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	p = malloc(end - start + 2);
	if (p == NULL)
		return (NULL);
	while (start <= end)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}
