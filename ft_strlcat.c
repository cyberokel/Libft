/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:01:28 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/18 17:01:30 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	if (!dst && dstsize == 0)
	{
		return (ft_strlen(src));
	}
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	dstsize = dstsize - dst_len;
	if (dstsize)
	{
		while (src[i] && dstsize - 1 != 0)
		{
			dst[dst_len + i] = src[i];
			i++;
			dstsize--;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}
