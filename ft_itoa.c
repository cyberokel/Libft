char	*ft_itoa(int n)
{
	char	*nbr;
	int	count;
	int	len;
	int	i;

	i = 1;
	count = n;
	if (n < 0)
		count = n * -1;
	while (count >= 10)
	{
		count = count / 10;
		i++;
	}
	len = i + 2;
	nbr = malloc(sizeof(char) * len);
	if (!nbr)
		return (NULL);
	return (nbr);
}
