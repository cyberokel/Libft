int	ft_isdigit(int nb)
{
	if ( nb >= 48 && nb <= 57)
		return (1);
	else
		return (0);
}
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("%d\n", ft_isdigit('2'));
	printf("%d\n", isdigit('2'));
	printf("%d\n", ft_isdigit('f'));
	printf("%d", isdigit('f'));
}
