/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:00:27 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/29 22:42:53 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dst;
	unsigned char	*source;

	if (src == NULL && dest == NULL)
		return (NULL);
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (dst < source)
		ft_memcpy(dest, src, len);
	else
	{
		while (len != 0)
		{
			len--;
			dst[len] = source[len];
		}
	}
	return (dst);
}
