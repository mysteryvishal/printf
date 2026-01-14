/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:02:26 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/06 23:18:34 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	else
		return (ch);
}

/*
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'a'
	printf("before: %s\n", c);
	printf("after : %s\n\n", ft_toupper(c));
	return (0);
}
*/
