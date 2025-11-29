/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:00:27 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/29 18:35:39 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*usrc;
	unsigned char		*udst;
	size_t				i;

	if (dst == src || len == 0)
		return (dst);
	usrc = (const unsigned char *)src;
	udst = (unsigned char *)dst;
	i = 0;
	if (udst > usrc && udst < usrc + len)
	{
		while (len--)
			udst[len] = usrc[len];
	}
	else
	{
		while (i < len)
		{
			udst[i] = usrc[i];
			i++;
		}
	}
	return (dst);
}
