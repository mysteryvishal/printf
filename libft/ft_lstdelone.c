/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 01:39:59 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/12 12:24:55 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lstdelone:
// 	Takes a node as parameter and frees its content using the 'del' function
// 	- Free the node itself but does NOT free the next node.
// 	- Doesn't adjust linked list pointers.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
