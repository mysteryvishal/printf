/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:48:06 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/14 12:32:52 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strtrim:
// 	Allocates memory and returns copy of 's1' with the characters
// 	in 'set' removed from the beginning and the end of the string.
// 	- Returns NULL if the allocation fails.

#include "libft.h"

static int	ft_isin(const char ch, const char *set)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (ch == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	size_t	start;
	size_t	end;
	size_t	size;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_isin(s1[start], set))
		start++;
	while (end > start && ft_isin(s1[end - 1], set))
		end--;
	size = end - start;
	res = (char *)malloc(size + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + start, size + 1);
	return (res);
}

// testing

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*test1 = ft_strtrim("  abc  ", " ");
// 	printf("test 1:\n>> out: %s\n>> match: %d\n\n", 
// 			test1, memcmp(test1, "abc", 3));
// 	char	*test2 = ft_strtrim("", " ");
// 	printf("test 2:\n>> out: %s\n>> match: %d\n\n", 
// 			test2, memcmp(test2, "", ft_strlen("")));
// 	char	*test3 = ft_strtrim("    ", " ");
// 	printf("test 3:\n>> out: %s\n>> match: %d\n\n", 
// 			test3, memcmp(test3, "", ft_strlen("")));
// 	char	*test4 = ft_strtrim("abc", "");
// 	printf("test 4:\n>> out: %s\n>> match: %d\n\n", 
// 			test4, memcmp(test4, "abc", 3));
// 	return (0);
// }