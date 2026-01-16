/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 03:32:17 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/10 17:21:07 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcpy:
// 	copies up to size - 1 characters from src to dst.
// 	- does not append
// 	- both strings must be NUL-terminated
// 	- returns the length of src.
//

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (i < (size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	const char	*sources[] = {
		"Hello, world!",
		"",
		"A",
		"This is a longer string to test copying"
	};
	size_t sizes[] = {0, 1, 5, 20, 50};
	char dst1[100];
	char dst2[100];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
	size_t ret1 = strlcpy(dst1, sources[i], sizes[j]);
	size_t ret2 = ft_strlcpy(dst2, sources[i], sizes[j]);
	printf("Source: \"%s\", Size: %zu\n", sources[i], sizes[j]);
	printf("strlcpy: \"%s\", return: %zu\n", dst1, ret1);
	printf("ft_strlcpy: \"%s\", return: %zu\n", dst2, ret2);
	printf("%s\n\n",
	(ret1 == ret2 && strcmp(dst1, dst2) == 0) ? "PASS" : "FAIL");
		}
	}
	return (0);
} */
