/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:26:54 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/16 16:44:25 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// substr:
// 	Allocates (with malloc(3)) and returns a substring from the string ’s’.
// 	- The substring begins at index ’start’ and is of maximum size ’len’.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = ft_calloc((len + 1), sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	*str = "Hello, World!";
	unsigned int	start = 7;
	size_t		len = 5;
	char		*result;
	char		*result2;

	result = ft_substr(str, start, len);
	if (result)
	{
		printf("Substring: %s\n", result); // Expected output: "World"
		free(result);
	}
	else
		printf("Memory allocation failed!\n");
	return (0);
}*/