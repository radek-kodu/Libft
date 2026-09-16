/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpokorny <rpokorny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:12:14 by rpokorny          #+#    #+#             */
/*   Updated: 2026/09/10 16:09:21 by rpokorny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			result++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (result);
}

static char	*word_store(char const *s, char c, int start)
{
	int		i;
	int		len;
	char	*word;

	len = 0;
	while (s[start + len] && s[start + len] != c)
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_words(char **slova, int j)
{
	while (j > 0)
	{
		j--;
		free(slova[j]);
	}
	free(slova);
}

static int	fill_words(char **slova, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		slova[j] = word_store(s, c, i);
		if (!slova[j])
		{
			free_words(slova, j);
			return (0);
		}
		j++;
		while (s[i] && s[i] != c)
			i++;
	}
	slova[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**slova;

	if (!s)
		return (NULL);
	slova = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (slova == NULL)
		return (NULL);
	if (!fill_words(slova, s, c))
		return (NULL);
	return (slova);
}

#include <stdio.h>

int main()
{
	char *str;
	char	**words;

	str = "aweg  aweg ";
	words = ft_split(str, ' ');

	printf("%s\n", words[0]);

	printf("%s", words[1]);

	return 0;
}