/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:21:06 by itaskira          #+#    #+#             */
/*   Updated: 2022/07/21 21:51:06 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int a)
{
	char	n;
	char	p;

	n = 'N';
	p = 'P';
	if (a < 0)
	{
		write(1, &n, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

int	main(void)
{
	ft_is_negative(3);
	return (0);
}
