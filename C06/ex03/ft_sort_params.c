/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:00:09 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/04 17:06:56 by itaskira         ###   ########.fr       */
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
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main(int av, char **ac)
{
	int		n;
	int		i;
	char	*temp;

	n = 1;
	while (n != av - 1)
	{
		i = 1;
		while (i != av -1)
		{
			if (ft_strcmp(ac[i], ac[i + 1]) > 0)
			{
				temp = ac[i];
				ac[i] = ac[i + 1];
				ac[i + 1] = temp;
			}
			i++;
		}
		n++;
	}
	i = 0;
	while (ac[++i])
		ft_putstr(ac[i]);
	return (0);
}
