/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:48:56 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/29 16:46:45 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strjoin:
// 	Allocates memory and returns a new string, which is the result of the
// 	concatenation of 's1' and 's2'.
// 	- Returns NULL if the allocation fails.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joined_str = (char *)malloc(len_s1 + len_s2 + 1);
	if (!joined_str)
		return (NULL);
	ft_memcpy(joined_str, s1, len_s1);
	ft_memcpy(joined_str + len_s1, s2, len_s2);
	joined_str[len_s1 + len_s2] = '\0';
	return (joined_str);
}
/*
#include <stdio.h>
int main()
{
	char *s1 = "Hello, ";
	char *s2 = "World!";
	char *result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("%s\n", result); // Expected output: "Hello, World!"
		free(result);
	}
	return 0;
}*/