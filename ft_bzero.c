/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:57:09 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/18 16:57:12 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str = s;
	size_t	i;

	i = 0;
	if (n == 0)
		return ;
	else
	{
		while (i < n)
		{
			str[i] = 0;
			i++;
		}
	}
}
