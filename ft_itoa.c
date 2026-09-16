/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpokorny <rpokorny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:07:39 by rpokorny          #+#    #+#             */
/*   Updated: 2026/09/09 12:59:55 by rpokorny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_length(long nb)
{
	int	length;

	length = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		length++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		length;
	char	*cislo;

	nb = n;
	length = nb_length(nb);
	cislo = malloc(length + 1);
	if (cislo == NULL)
		return (NULL);
	if (nb < 0)
		nb = -nb;
	cislo[length] = '\0';
	if (nb == 0)
		cislo[0] = '0';
	while (nb > 0)
	{
		length--;
		cislo[length] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (n < 0)
		cislo[--length] = '-';
	return (cislo);
}
