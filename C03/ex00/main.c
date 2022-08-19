/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:46:09 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/01 16:52:26 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	j = s1[i] - s2[i];
	return (j);
}

int	main(void)
{
	printf("%d",ft_strcmp("abcdefg","a"));
}

/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    const char *cp1 = "abcdefg";
    const char *cp2 = "a";
    int ret;

    ret = strcmp(cp1, cp2);

    printf("%d",ret);
    return 0;
}
*/
