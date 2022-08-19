/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:05:24 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/04 11:50:34 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	while (i * i < nb)
		i++;
	if ((nb / (i * i)) == 1)
		return (i);
	else
		return (0);
}

int	main(void)
{
	printf("%d",ft_sqrt(4));
}
