/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:01:15 by akhalidi          #+#    #+#             */
/*   Updated: 2025/11/29 18:38:22 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	int		len;

	len = ft_strlen(s1);
	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	ret = (char *)ft_memcpy(ret, s1, len + 1);
	return (ret);
}
