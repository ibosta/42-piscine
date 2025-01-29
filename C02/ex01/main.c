/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:25:47 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/01 12:36:23 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}

int main(void)
{
	char	a[] = "Bilgisayar";
	char	b[] = "Programlama";

	printf("%s",ft_strncpy(a,b,7));
}

/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    char cdizi1[] = "Bilgisayar";
    const char cdizi2[] = "Programlama";

    strncpy(cdizi1, cdizi2, 7);

    printf("%s\n", cdizi1);

    return 0;
}

*/
