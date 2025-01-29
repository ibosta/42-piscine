#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}
int main(void)
{
	int a=25;
	int b=5;
	int *c;
	int *d;

	c = &a;
	d = &b;

	ft_div_mod(a,b,c,d);
	printf("%d\n",a);
	printf("%d",b);
}
