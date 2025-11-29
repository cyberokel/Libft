/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:00:38 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/18 17:00:39 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c,size_t len)
{
	unsigned char	*ptr;
	int	j;

	ptr = b;
	j = 0;
	while (j < len)
	{
		ptr[j] = c;
		j++;
	}
	return (b);
}
