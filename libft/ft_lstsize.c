/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:36:04 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/12 02:58:39 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lstsize:
// 	Counts the number of nodes in the list.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*cursor;

	count = 0;
	cursor = lst;
	while (cursor != NULL)
	{
		cursor = cursor->next;
		count++;
	}
	return (count);
}
