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
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s[0] != c)
		count++; 
	while(s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

int	ft_count_len(char const *s, char c)
{
	int	i;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		count++;
		i++;
	}
	return (count);
}

/*int	ft_check(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && */
char	**ft_split(char const *s, char c)
{
	char	**table;
	size_t	i;
	size_t	words;
	size_t	len;

	i = 0;
	words = ft_count_words(s, c);
	len = ft_count_len(s, c);
	table = malloc(sizeof(char*)* words + 1);
	if (!table)
		return (NULL);
	*table = (sizeof(char) * len + 1);
	if (!*table)
		return (NULL);
	while (table[i][j])
	{
		j = 0;
		while (table[i][j] && s[k] != c)
		{
			table[i][j] = s[k];
			j++;
			k++;
		}
		table[i][j] = '\0';
		i++
	}
	return (table);
}
