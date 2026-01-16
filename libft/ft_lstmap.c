/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 02:33:45 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/12 09:12:52 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lstmap:
// 	Iterates through the list ’lst’
// 	- applies the function ’f’ to each node’s content, 
// 	- creates a new list resulting of the successive applications of 'f'
// 	The ’del’ function is used to delete the content of a node if needed.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*res;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, node);
		lst = lst->next;
	}
	return (res);
}
