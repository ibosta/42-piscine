/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:31:47 by itaskira          #+#    #+#             */
/*   Updated: 2022/07/31 12:33:50 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return(1);
}

int main(void)
{
	printf("%d\n", ft_str_is_numeric("1234567890"));
	printf("%d\n", ft_str_is_numeric("abcdef24235ghfgjdfgdfjhfgh"));
	printf("%d\n", ft_str_is_numeric(""));
}
