char	*strdup(const char *s)
{
	char	*cpy;
	size_t	len;
	int	i;
	
	if(!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	cpy = malloc(sizeof(char) * len);
	if(!cpy)
		return (NULL);

	i = 0;
	while (s[i] != '\0')
	{
		cpy[i] = s[i];
		i++;
	}
	return (cpy);
}
