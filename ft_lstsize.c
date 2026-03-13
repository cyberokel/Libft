/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 22:16:47 by akhalidi          #+#    #+#             */
/*   Updated: 2026/03/13 18:08:07 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_lstsize(t_list *lst)
{
	if(!lst)
		return (!NULL);
	int    count;

	count = 0;
	while(lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
