#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int glass;

	glass = *a;
	*a = *b;
	*b = glass;
}
int main(void)
{
	int c;
	int d;
	int *a;
	int *b;
	a = &c;
	b = &d;
	c = 5;
	d = 2;
	printf("%d",c);
	printf("%d\n",d);
	ft_swap(a,b);
	printf("%d",c);
	printf("%d\n",d);
}
