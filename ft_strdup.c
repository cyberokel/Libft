/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:01:15 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/18 17:01:16 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	len;
	int	i;
	
	if(!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	cpy = malloc(sizeof(char) * len);
	if(!cpy)
		return (NULL);

	i = 0;
	while (s[i] != '\0')
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
