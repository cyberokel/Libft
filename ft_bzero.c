void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str = s;
	int	i;

	i = 0;
	if (n == 0)
		return ;
	else
	{
		while (i < n)
		{
			str[i] = 0;
			i++;
		}
	}
}
