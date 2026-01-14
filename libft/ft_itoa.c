/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:13:41 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/06 22:28:47 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_digits(int n)
{
	unsigned int	size;
	unsigned int	num;

	if (n == 0)
		return (1);
	num = (unsigned int) n;
	if (n < 0)
		num = -num;
	size = 0;
	while (num > 0)
	{
		num /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	unsigned int	size;
	unsigned int	num;
	char			*res;

	size = ft_digits(n);
	num = (unsigned int) n;
	if (n < 0)
	{
		size++;
		num = -num;
	}
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	res[size] = '\0';
	while (size != 0)
	{
		res[--size] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

// #include <stdio.h>
// #include <limits.h>
// int	main(void)
// {
// 	int	n = INT_MIN;
// 	char	*res = ft_itoa(n);
// 	printf("-----\n");
// 	printf("num: %d\nstr: %s\n", n, res);
// 	free(res);
// 	return (0);
// }