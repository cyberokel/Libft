void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if(!lst || !del)
		return;
	while(*lst != NULL)
	{
		ptr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = ptr;
	}
}
