/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:41:23 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/09 20:08:06 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if(min >= max)
		return (0);
	p = (int *)malloc((max - min)*sizeof(int));
	if (p == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
int main()
{
	int i = 0;
	int *str = ft_range(4,20);
	while (str[i])
	{
		printf("%d",str[i]);
		i++;
	}
}
