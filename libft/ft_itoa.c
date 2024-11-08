/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:04:40 by itaskira          #+#    #+#             */
/*   Updated: 2024/11/01 13:22:48 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_count(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = len_count(n);
	nbr = (char *)malloc(sizeof(char) * len + 1);
	if (!nbr)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		nbr[0] = '-';
	}
	nbr[len] = '\0';
	len--;
	while (n > 0)
	{
		nbr[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (nbr);
}
