/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:16:03 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/04 13:29:39 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int av, char **ac)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < av)
	{
		i = 0;
		while (ac[j][i])
		{
			write(1, &ac[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (1);
}
