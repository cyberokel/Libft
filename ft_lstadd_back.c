/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidi <akhalidi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 21:47:59 by akhalidi          #+#    #+#             */
/*   Updated: 2026/03/15 16:54:27 by akhalidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = ft_lstlast(*lst);
	ptr->next = new;
	new->next = NULL;
}
/*int    main()
{
    t_list *n1;
    t_list *n2;
    t_list *n3;
    t_list **lst;
    
    lst = &n1;
    n1 = ft_lstnew("first");
    n2 = ft_lstnew("deux");
    n3 = ft_lstnew("third");
    printf("%p\n", n2);
    ft_lstadd_back(lst, n2);
    printf("%p", n2);
    ft_lstadd_back(lst, n3);
    free(n1);
    free(n2);
    free(n3);
    return (0);
}*/
