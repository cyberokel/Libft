 char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int	i;
	size_t	lens;

	i = 0;
	lens =  ft_strlen(s);
	if (start >= lens)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[i] = '\0';
		return (str);
	}
	if (len > lens - start)
		len = lens - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
