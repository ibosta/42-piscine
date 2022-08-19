#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int glass;

	i = 0;
	while(i< (size / 2))
	{
		glass = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = glass;
		i = i + 1;
	}
}
int main()
{
	int tab[] = {1,2,3,4,5};
	int size = 5;
	int j = 0;
	ft_rev_int_tab(tab,size);

	while(j < size)
	{
	printf("%d", tab[j]);
	if(j != size -1)
	printf("%s", " ,");
	j = j + 1;
	}
}
