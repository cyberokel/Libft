/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:00:48 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/22 22:14:05 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while(s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

int	ft_strlen(

char	**ft_split(char const *s, char c)
{
	char	**table;
	size_t	i;
	size_t	len;

	i = 0;
	words = ft_count(s, c);
	table = malloc(sizeof(char*)* words + 1);
	if (!table)
		return (NULL);

