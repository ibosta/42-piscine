/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:37:32 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/03 14:21:50 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check(char *str, int *i)
{
	int	sign;
	int	j;

	sign = 1;
	j = 0;
	while (str[j] == ' ' || str[j] == '\f' || str[j] == '\n'
		|| str[j] == '\r' || str[j] == '\t' || str[j] == '\v')
		j++;
	while (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			sign *= -1;
		j++;
	}
	*i = j;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	res = 0;
	sign = check(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	res *= sign;
	return (res);
}

int	main(void)
{
	char	a[] = " ---+--+1234ab567";
	printf("%d", ft_atoi(a));
}
