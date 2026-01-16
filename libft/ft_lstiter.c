/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 02:33:53 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/12 02:37:43 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lstiter:
// 	Iterates through the list ’lst’ and applies the 
// 	function ’f’ to the content of each node.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*cursor;

	cursor = lst;
	while (cursor != NULL)
	{
		f(cursor->content);
		cursor = cursor->next;
	}
}
