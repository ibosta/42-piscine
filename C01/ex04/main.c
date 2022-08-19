#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int mod;
	int div;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main(void)
{
	int c = 20;
	int d = 3;
	ft_ultimate_div_mod(&c,&d);
	printf("%d\n",c);
	printf("%d",d);

}
