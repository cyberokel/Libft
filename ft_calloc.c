/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:57:26 by akhalidi          #+#    #+#             */
/*   Updated: 2025/12/01 18:39:49 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*arr;

	if (size > INT_MAX || count > INT_MAX || size * count > INT_MAX)
		return (NULL);
	total = count * size;
	arr = malloc(total);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, total);
	return (arr);
}
