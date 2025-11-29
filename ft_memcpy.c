/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:00:15 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/18 17:00:16 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*a;
	const char	*b;
	int	i;

	i = 0;
	a = dst;
	b = src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}			
