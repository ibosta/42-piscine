#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while ( *str != '\0')
	{
		write(1, str , 1);
		i = i + 1;
		str = str + 1;
	}
}

int	main()
{
	char *c = "testtext";
	ft_putstr(c);
}
