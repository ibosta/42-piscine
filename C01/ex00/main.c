#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int main()
{
	int	*nbr;
	int ok;

	ok = 44;
	printf("%d\n",ok);
	nbr = &ok;
   ft_ft(nbr);
   printf("%d",ok);
}
