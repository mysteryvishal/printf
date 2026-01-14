/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:30:16 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/16 10:57:03 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcat:
// 	appends the NUL-terminated string src to the end of dst.
// 	- both parameter strings must be NUL-terminated.
//	- will append at most size − strlen(dst) − 1 bytes.
//	- NUL-terminates the result
// 	- returns the length of src.

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = 0;
	if (size == 0)
		return (dst_len + src_len);
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	if (dst_len >= size)
		return (size + src_len);
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	const char	*sources[] = {
		"world!",
		"",
		"A",
		"the source string to test concatination"
	};
	size_t sizes[] = {0, 1, 5, 20, 50};

	for (int i = 0; i < 5; i++)
	{
		char dst[20] = "Hello";
		
	}
}*/