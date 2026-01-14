/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:00:34 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/11 16:40:18 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lstnew:
// 	Allocates memory (using malloc(3)) and returns a new node. 
// 	The ’content’ member variable is initialized with the given parameter
// 	’content’. The variable ’next’ is initialized to NULL

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
