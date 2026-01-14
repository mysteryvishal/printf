/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 02:02:28 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/12 12:29:51 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lstclear:
// 	Deletes and frees the given node and all its successors, 
// 	using the function ’del’ and free(3). 
// 	Finally, set the pointer to the list to NULL.

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	free(*lst);
	*lst = NULL;
}
