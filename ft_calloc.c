/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpokorny <rpokorny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 14:22:49 by rpokorny          #+#    #+#             */
/*   Updated: 2026/09/09 13:01:45 by rpokorny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	p = malloc (nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size * nmemb);
	return (p);
}
