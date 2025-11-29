/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:59:12 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/29 19:42:03 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	nb_digits(long n)
{
	int	nbr;

	nbr = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		nbr++;
		n = -n;
	}
	while (n > 0)
	{
		nbr++;
		n /= 10;
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	int		nbr_digits;
	long	nb;
	char	*ret;

	nb = (long)n;
	nbr_digits = nb_digits(nb);
	ret = malloc(nbr_digits + 1);
	if (!ret)
		return (NULL);
	if (nb < 0)
		nb *= -1;
	ret += nbr_digits;
	*ret = 0;
	if (nb == 0)
		*(--ret) = '0';
	while (nb > 0)
	{
		*(--ret) = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		*(--ret) = '-';
	return (ret);
}
