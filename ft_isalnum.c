int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_isalnum('t'));
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('!'));
	printf("%d\n", ft_isalnum('+'));
}
