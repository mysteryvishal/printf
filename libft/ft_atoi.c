/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:22:15 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/13 04:12:48 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(int arg)
{
	if ((arg >= 9 && arg <= 13) || arg == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*str && is_space(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("   42"));		// 42
	printf("%d\n", ft_atoi("   ---+--+1234ab567"));	// -1234
	printf("%d\n", ft_atoi("++--+--42"));		// 42
	printf("%d\n", ft_atoi("+-hello42"));		// 0
	printf("%d\n", ft_atoi(""));			// 0
	printf("%d\n", ft_atoi("2147483647"));		// 2147483647
	printf("%d\n", ft_atoi("-2147483648"));		// -2147483648
	printf("%d\n", ft_atoi("   -"));		// 0
	printf("%d\n", ft_atoi("   +0000123"));		// 123
	printf("%d\n", ft_atoi("  \n\t\f\r\v456xyz"));	// 456
	return (0);
}*/
