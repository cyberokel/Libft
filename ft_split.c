/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:00:48 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/22 22:20:18 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_all(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

static char	**fill_tab(char **tab, const char *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	k = 0;
	while (s[k])
	{
		while (s[k] == c)
			k++;
		if (!s[k])
			break ;
		len = word_len(&s[k], c);
		tab[i] = malloc(len + 1);
		if (!tab[i])
			return (free_all(tab, i - 1), NULL);
		j = 0;
		while (j < len)
			tab[i][j++] = s[k++];
		tab[i++][j] = '\0';
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	return (fill_tab(tab, s, c));
}

