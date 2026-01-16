/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:08:03 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/27 17:18:11 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4";

	printf("String: %s\nSize: %d\n", str, ft_strlen(str));
	return (0);
}
*/
