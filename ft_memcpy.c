void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*a;
	const char	*b;
	int	i;

	i = 0;
	a = dst;
	b = src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}			
