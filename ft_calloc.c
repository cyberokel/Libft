/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:57:26 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/29 19:03:56 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*arr;

	total = count * size;
	arr = malloc(total);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, total);
	return (arr);
}
