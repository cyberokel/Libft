void	*ft_memset(char *b, int c,int len)
{
	unsigned char	*ptr;
	int	j;

	ptr = b;
	j = 0;
	while (j < len)
	{
		ptr[j] = c;
		j++;
	}
	return (b);
}
