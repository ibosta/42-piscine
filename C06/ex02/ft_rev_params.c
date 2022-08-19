/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:30:31 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/04 15:40:29 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int av, char **ac)
{
	int	c;

	c = av - 1;
	while (c >= 1)
	{
		ft_putstr(ac[c]);
		write(1, "\n", 1);
		c--;
	}
	return (0);
}
