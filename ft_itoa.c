/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:59:12 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/29 18:51:56 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		count++;
	}
	if (nbr < 10)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		len;

	nbr = n;
	len = ft_len(nbr) + 1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (nbr < 0)
		nbr *= -1;
	while (len >= 0)
	{
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
