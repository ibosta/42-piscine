/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:49:39 by itaskira          #+#    #+#             */
/*   Updated: 2022/07/31 13:04:53 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') 
			i++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return(1);
}

int main(void)
{
	printf("%d\n", ft_str_is_alpha("abcdefgghfgjdfgdfjhfgh"));
	printf("%d\n", ft_str_is_alpha("AxsgsdDGSFDGDFHDdfsdg"));
	printf("%d\n", ft_str_is_alpha("abcdef24235ghfgjdfgdfjhfgh"));
	printf("%d\n", ft_str_is_alpha(""));
}
