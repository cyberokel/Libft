/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:00:27 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/18 17:00:28 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	const unsigned char	*source;
	int	i;

	if (len == 0)
		return (dst);
	dest = dst;
	source = src;
	i = 0;
	if (dest < source)
		ft_memcpy(dst, src, len);
	else if (dest > source)
	{
		while(len > 0)
		{
			len--;
			dest[len] = source[len];
		}
	}
	return (dst);
}
