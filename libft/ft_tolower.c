/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:05:20 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/06 23:20:06 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	else
		return (ch);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'A'
	printf("before: %s\n", c);
	printf("after : %s\n\n", ft_tolower(c));
	return (0);
}
*/
