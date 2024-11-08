/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:23:53 by itaskira          #+#    #+#             */
/*   Updated: 2024/11/07 14:30:22 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*new;

	if (!lst)
		return (0);
	new = lst;
	i = 0;
	while (new)
	{
		new = new->next;
		i++;
	}
	return (i);
}
