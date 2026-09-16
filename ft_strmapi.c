/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpokorny <rpokorny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:59:01 by rpokorny          #+#    #+#             */
/*   Updated: 2026/09/02 14:00:23 by rpokorny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		length;

	length = ft_strlen(s);
	str = malloc (length + 1);
	if (str == NULL)
		return (NULL);
	length = 0;
	while (s[length])
	{
		str[length] = f(length, s[length]);
		length++;
	}
	str[length] = '\0';
	return (str);
}
