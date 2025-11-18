/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:57:42 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/18 16:57:44 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_isalnum('t'));
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('!'));
	printf("%d\n", ft_isalnum('+'));
}
