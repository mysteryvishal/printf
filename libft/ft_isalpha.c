/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:10:33 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/06 22:27:56 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	if ((arg >= 65 && arg <= 90)
		|| (arg >= 97 && arg <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("Input: %d // Output: %d\n", 65, ft_isalpha(65));
	printf("Input: %d // Output: %d\n", 120, ft_isalpha(120));
	printf("Input: %d // Output: %d\n", 0, ft_isalpha(0));
	printf("Input: %d // Output: %d\n", 2000, ft_isalpha(2000));
	printf("Input: %c // Output: %d\n", 'A', ft_isalpha('A'));
	return (0);
}*/
