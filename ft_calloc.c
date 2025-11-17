void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*arr;

	total = count * size;
	arr = malloc(total);
	if(!arr)
		return (NULL);
	ft_memset(arr, 0, total);
	return (arr);
}
