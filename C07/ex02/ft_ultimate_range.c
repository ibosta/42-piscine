/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:39:24 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/09 14:13:43 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*p;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	p = malloc(sizeof(int) * (i));
	if (p == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = p;
	i = 0 ;
	while (max > min)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (i);
}
