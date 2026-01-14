/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:42:36 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/27 17:16:59 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// bzero:
// 	fills the first n bytes of the object pointed to by dst with zero 
// 	(NUL) bytes.

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *) dst;
	i = 0;
	while (i < n)
		dest[i++] = 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char    buffer1[80];
    char    buffer2[80];

    bzero(buffer1, 80);
    ft_bzero(buffer2, 80);
    printf("Equal (0 if equal): %d\n", memcmp(buffer1, buffer2, 80));
    return (0);
}*/
