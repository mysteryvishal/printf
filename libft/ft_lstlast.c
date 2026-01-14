/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:57:45 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/12 03:00:42 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lstlast:
// 	Returns the last node of the list.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cursor;

	if (!lst)
		return (NULL);
	cursor = lst;
	while (cursor->next != NULL)
		cursor = cursor->next;
	return (cursor);
}
