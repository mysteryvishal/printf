/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:43:02 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/07 02:03:08 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memcmp:
// 	Compares the first n bytes of memory pointed to by ptr1 with ptr2.
// 	- returning 0 if both blocks are equal.
// 	- <0 if the first byte that does not match is lower in ptr1 than ptr2
// 	- >0 if the first byte that does not match is greater in ptr 1 than ptr2

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	if (n == 0)
		return (0);
	p1 = (unsigned char *) str1;
	p2 = (unsigned char *) str2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (p1[i] - p2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[15];
	char	str2[15];
	int	res1;
	int	res2;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "", 6);
	
	res1 = memcmp(str1, str2, 5);
	res2 = ft_memcmp(str1, str2, 5);

	printf("Original: %d\t| FT: %d\n", res1, res2);
	return (0);
}*/
