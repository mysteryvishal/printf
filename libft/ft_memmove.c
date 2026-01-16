/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:43:06 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/13 23:45:35 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memmove:
//      used to copy a block of memory from a location to another.
// 	- memcpy leads to problems where strings overlap.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	cpy1[100] = "Geeks";
	char	cpy2[100] = "Geeks";
	char	str[8] = "Quiz";
	
	printf("BEFORE:\nOG: %s\t| FT: %s\n\n", cpy1, cpy2);
	memmove(cpy1, str, sizeof(str));
	ft_memmove(cpy2, str, sizeof(str));
	printf("AFTER :\nOG: %s\t| FT: %s\n\n", cpy1, cpy2);
	printf("Memory (0 if equal): %d\n", memcmp(cpy1, cpy2, sizeof(cpy1)));
	return (0);
}*/