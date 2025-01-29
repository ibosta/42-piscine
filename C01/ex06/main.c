#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(*str != '\0')
	{
		i = i + 1;
		str = str + 1;
	}
	return (i);
}
int main()
{
	char *test;

	test = "denemeyeeeyy";
	printf("%d\n",ft_strlen(test));
}
