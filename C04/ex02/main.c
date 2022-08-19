/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:45:19 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/03 10:34:33 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int nbr)
{
	write(1, &nbr, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print('-');
		print('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		print('-');
		ft_putnbr(nb = nb * -1);
	}
	else if (nb >= 0 && nb <= 9)
	{
		print(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	ft_putnbr(0);
	ft_putnbr(-4);
	ft_putnbr(124353);
	ft_putnbr(-2147483648);
}
