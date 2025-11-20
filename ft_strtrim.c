/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:23:02 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/18 17:56:37 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char const *a, char const *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (a[i])
	{
		j = 0;
		while (b[j])
		{
			if (a[i] == b[j])
				len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	len;
	int	i;
	int	j;
	int	k;
	
	i = 0;
	j = 0;
	len = ft_strlen(s1) - ft_len(s1, set) + 1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				i++;
			j++;
		}
		str[k] = s1[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
