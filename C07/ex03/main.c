/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:14:33 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/09 17:49:34 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int	i;
	int	j;
	int	c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while(i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size -1)
			s[c++] = sep[j++];
		i++;
	}
	s[c] = '\0';
	return (s);
}
int main()
{
	char	*tab[4];
	tab[0] = "iboş";
	tab[1] = "ibrahim";
	tab[2] = "ibram";
	tab[3] = "ibosko";
	printf("%s", ft_strjoin(4, tab, " Adamdır,"));
	return (0);
}
