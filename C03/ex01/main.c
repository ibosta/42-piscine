/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:27:46 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/01 16:57:11 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	while ( i < n && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if(s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return (0);
}
int main()
{
	printf("%d",ft_strncmp("lalalalaa222","bebele2",7));
}

/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    const char *cp1 = "lalalalaa222";
    const char *cp2 = "bebele2";
    
    printf("%d",strncmp(cp1, cp2, 7));
    return 0;
}
*/
