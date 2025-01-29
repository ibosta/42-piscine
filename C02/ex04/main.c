/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:07:26 by itaskira          #+#    #+#             */
/*   Updated: 2022/07/31 13:17:29 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("sdcsdvsvrtvbrtbnhgfgbfdaf"));
	printf("%d\n", ft_str_is_lowercase("1234567890"));
	printf("%d\n", ft_str_is_lowercase("FBHEBTRHBDAFASDG"));
	printf("%d\n", ft_str_is_lowercase("abcdehg1234hfgjdfgdfjhfgh"));
	printf("%d\n", ft_str_is_lowercase(""));
}
