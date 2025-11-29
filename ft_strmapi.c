char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s) + 1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
