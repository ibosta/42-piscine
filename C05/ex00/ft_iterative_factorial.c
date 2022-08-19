/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:09:18 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/03 19:26:53 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fak;

	fak = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			fak *= nb;
			nb--;
		}
	}
	return (fak);
}
