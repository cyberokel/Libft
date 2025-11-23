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

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

int	ft_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	int	i;
	int	j;
	int	k;
	int	words;

	i = 0;
	j = 0;
	k = 0;
	words = ft_count_words(s, c) + 1;
	table = malloc(sizeof(char*)* words);
	if (!table)
		return (NULL);
	while (s[k])
	{
		while (s[k] == c)
			k++;
		table[i] = malloc(sizeof(char)  * (ft_len(&s[k], c) + 1));
		if (!table[i])
			return (NULL);
		j = 0;
		while(s[k] != c)
		{
			table[i][j] = s[k];
			j++;
			k++;
		}
		table[i][j] = '\0';
		i++;
	}
	return (table);
}
