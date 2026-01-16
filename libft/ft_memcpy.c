/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:43:03 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/07 19:53:18 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memcpy:
// 	memory to memory copy.
// 	used to copy a block of memory from one location to another.
// 	- copies memory in a byte-by-byte format.

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	if (!dst && !src)
		return (dst);
	to = (unsigned char *) dst;
	from = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	return (to);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "Geeks";
	char	cpy1[6] = "";
	char	cpy2[6] = "";

	printf("BEFORE:\nOG: %s\t| FT: %s\n\n",cpy1, cpy2);
	memcpy(cpy1, str, sizeof(str));
	ft_memcpy(cpy2, str, sizeof(str));
	printf("AFTER:\nOG: %s\t| FT: %s\n",cpy1, cpy2);
	return (0);
}*/
