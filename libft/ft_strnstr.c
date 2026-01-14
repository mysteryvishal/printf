/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:15:58 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/10 17:18:12 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strnstr:
// 	find the first occurance where of needle in haystack, within len bytes
// 	- return pointer in haystack where match begins
// 	- if needle empty => return haystack
// 	- if len == 0 or not found => return null

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0 && needle[0] != '\0')
		return (NULL);
	i = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && (i + j) < len
				&& haystack[i + j] == needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	find[] = "body";
	char	test1[] = "example body to search through";
	// char	test2[] = "example";
	// char	test3[] = "";

	printf("test1: %s\nfound: %s\n", test1, ft_strnstr(test1, find, 20));
	return (0);
}*/
