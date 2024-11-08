/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:20:49 by itaskira          #+#    #+#             */
/*   Updated: 2024/11/07 18:03:10 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned char	ct;

	i = 0;
	ct = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == ct)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == ct)
		return ((char *)s + i);
	return (0);
}
