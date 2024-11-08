/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:08:58 by itaskira          #+#    #+#             */
/*   Updated: 2024/11/07 17:58:47 by itaskira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new;
	void	*trush;

	if (!lst || !f || !del)
		return (NULL);
	node = NULL;
	while (lst)
	{
		new = f(lst->content);
		if (!new)
			return (ft_lstclear(&node, del), NULL);
		trush = ft_lstnew(new);
		if (!trush)
			return (ft_lstclear(&node, del), del(new), NULL);
		ft_lstadd_back(&node, trush);
		lst = lst->next;
	}
	return (node);
}
