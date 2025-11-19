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

int     ft_len(int c, long *nbr)
{
        int     len;

        len = 0;
        if (c < 0)
        {
                *nbr = *nbr * -1;
                c = c * -1;
                len++;
        }
        while (c >= 10)
        {
                c = c / 10;
                len++;
        }
        if (c < 10)
                len++;
        return (len);
}
char    *ft_itoa(int n)
{
        char    *str;
        long    nbr;
        int     len;

        nbr = n;
        len = ft_len(nbr, &nbr) + 1;
        str = malloc(sizeof(char) * len);
        if (!str)
                return (NULL);
        str[len - 1] = '\0';
        len--;
        if (n < 0)
                str[0] = '-';
        while (len-- > 0 && nbr < 10)
        {
                str[len] =  (nbr % 10) + '0';
                nbr = nbr / 10;
        }
        return (str);
}
