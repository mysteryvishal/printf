/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:43:08 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/07 19:02:35 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memset:
// 	used to fill a block of memory with a particular value. 	

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*string;
	size_t			i;

	i = 0;
	ch = (unsigned char) c;
	string = (unsigned char *) s;
	while (i < n)
		string[i++] = ch;
	return (string);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[2];
	char	str2[2];
	int	n = 2;

	strcpy(str1, "");
	strcpy(str2, "");
	
	memset(str1, 'A', n);
	ft_memset(str2, 'A', n);

	printf("OG: %s | FT: %s\n", str1, str2);
	if (!memcmp(str1, str2, n))
		printf("memcmp: match\n");
	else
		printf("memcmp: different\n");
	return (0);
}*/
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[50] = "GeeksForGeeks is for programming geeks.";
	char str2[50] = "GeeksForGeeks is for programming geeks.";
	printf("Before memset(): %s\n", str1);
	printf("Before memset(): %s\n\n", str2);
	// Fill 8 characters starting from str[13] with '.'
	memset(str1 + 13, '.', 8*sizeof(char));
	memset(str2 + 13, '.', 8*sizeof(char));
	printf("After memset():  %s\n", str1);
	printf("After memset():  %s\n", str2);
	return 0;
}*/
