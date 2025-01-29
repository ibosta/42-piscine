/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:18:44 by itaskira          #+#    #+#             */
/*   Updated: 2022/07/27 12:19:33 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	glass;

	i = 0;
	while (i < (size / 2))
	{
		glass = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = glass;
		i = i + 1;
	}
}
