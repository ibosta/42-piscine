/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:48:51 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/03 20:03:42 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
