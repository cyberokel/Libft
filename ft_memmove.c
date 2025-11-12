void	*ft_memmove(void *dst, const void *src, size_t len)//add library of memcpy
{
	unsigned char	*dest;
	const unsigned char	*source;
	size_t	i;

	dest = dst;
	source = src;
	i = 0;
	if (dest < source)
		ft_mempcy(dst, src, len);
	else if (dest > source)
	{
		while(len >= 0)
		{
			dest[len] = source[len];
			len--;
		}
	}
	return (dst);
}
