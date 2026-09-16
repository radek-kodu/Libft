/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpokorny <rpokorny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 13:17:19 by rpokorny          #+#    #+#             */
/*   Updated: 2026/09/07 16:15:19 by rpokorny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;

	i = 0;
	p = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			p = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		p = (char *)&s[i];
	return (p);
}
