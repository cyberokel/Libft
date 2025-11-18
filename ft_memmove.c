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

void	*ft_memmove(void *dst, const void *src, size_t len)//add library of memcpy
{
	unsigned char	*dest;
	const unsigned char	*source;
	size_t	i;

	dest = dst;
	source = src;
	i = 0;
	if (dest < source)
		ft_mempcy(dst, src, len);
	else if (dest > source)
	{
		while(len >= 0)
		{
			dest[len] = source[len];
			len--;
		}
	}
	return (dst);
}
