/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:02:41 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/18 17:02:42 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int	i;
	size_t	lens;

	i = 0;
	lens =  ft_strlen(s);
	if (start >= lens)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[i] = '\0';
		return (str);
	}
	if (len > lens - start)
		len = lens - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
