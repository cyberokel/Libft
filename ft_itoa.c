/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:59:12 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/18 16:59:14 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	char	*nbr;
	int	count;
	int	len;
	int	i;

	i = 1;
	count = n;
	if (n < 0)
		count = n * -1;
	while (count >= 10)
	{
		count = count / 10;
		i++;
	}
	len = i + 2;
	nbr = malloc(sizeof(char) * len);
	if (!nbr)
		return (NULL);
	return (nbr);
}
