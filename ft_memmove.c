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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	if (src == NULL && dest == NULL)
		return (NULL);
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (dest2 < src2)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n != 0)
		{
			n--;
			dest2[n] = src2[n];
		}
	}
	return (dest);
}
