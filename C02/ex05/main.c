/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:18:50 by itaskira          #+#    #+#             */
/*   Updated: 2022/07/31 13:19:58 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("sdcsdvsvrtvbrtbnhgfgbfdaf"));
	printf("%d\n", ft_str_is_uppercase("1234567890"));
	printf("%d\n", ft_str_is_uppercase("FBHEBTRHBDAFASDG"));
	printf("%d\n", ft_str_is_uppercase("abcdehg1234hfgjdfgdfjhfgh"));
	printf("%d\n", ft_str_is_uppercase(""));
}
