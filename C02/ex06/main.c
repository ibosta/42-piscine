/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:22:07 by itaskira          #+#    #+#             */
/*   Updated: 2022/07/31 13:25:41 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_printable("sdcsdvsvrtvbrtinhgfgbfdaf"));
	printf("%d\n", ft_str_is_printable("1234567890®₺∑üiö¨∆^∂ƒßæ∫√~≈çΩßğğğüğüé"));
	printf("%d\n", ft_str_is_printable("FBHEBTRHBDAFASDG"));
	printf("%d\n", ft_str_is_printable("abcdehg1234hfgjdfgdfjhfgh"));
	printf("%d\n", ft_str_is_printable(""));
}
