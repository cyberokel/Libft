/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:02:28 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/29 21:50:56 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	int		i;
	int		sizecompl;

	cc = (char)c;
	sizecompl = 0;
	while (s[sizecompl] != '\0')
	{
		sizecompl++;
	}
	i = sizecompl;
	while (i >= 0)
	{
		if (s[i] == cc)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
