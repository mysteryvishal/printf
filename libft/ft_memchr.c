/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:42:59 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/12 09:12:33 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memchr:
//  searches for the first occurance of c in first n bytes pointed to by str

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*string;
	unsigned char		ch;
	size_t				i;

	ch = (unsigned char) c;
	string = (const unsigned char *) str;
	i = 0;
	while (i < n)
	{
		if (string[i] == ch)
			return ((void *) &string[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int     main(void)
{
        char    test[] = "hello test1 herer";
        char    ch = 'r';
        int     n = 15;

        char *res_og = (char *) memchr(test, ch, n);
        char *res_ft = (char *) ft_memchr(test, ch, n);

        printf("OG: %ld\n", res_og - test);
        printf("FT: %ld\n", res_ft - test);
        return (0);
}*/
