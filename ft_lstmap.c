t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*new;
	t_list	*list;
	void	*vault;

	list = NULL;
	if(!lst || !f || !del)
		return (NULL);
	while(lst != NULL)
	{
		vault = f(lst->content);
		if (!vault)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		new = malloc(sizeof(t_list));
		if(!new)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		new->content = vault;
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}
