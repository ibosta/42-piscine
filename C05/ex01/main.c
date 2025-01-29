/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:27:59 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/03 19:47:47 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb < 0)
		return (0);
	else
	{
		return(nb * ft_recursive_factorial(nb-1));
	}
}
int main()
{
	printf("%d",ft_recursive_factorial(5));
}
