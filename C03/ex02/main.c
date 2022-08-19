/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:46:44 by itaskira          #+#    #+#             */
/*   Updated: 2022/08/02 13:53:02 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[] = "selam";
	char src[] = "dostum";

	printf("%s",ft_strcat(dest,src));
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char cdizi1[] = "selam";
    const char cdizi2[] = "dostum";

    strcat(cdizi1, cdizi2);

    printf("%s", cdizi1);

    return 0;
}
*/
