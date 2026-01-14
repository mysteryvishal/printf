/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:48:56 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/13 12:04:00 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strdup:
// 	duplicates a string and returns a pointer to the duplicated string. 
// 	- duplicated string is a null-terminated byte string

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s) + 1;
	s2 = malloc(len);
	if (!s2)
		return (NULL);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return ((char *)(s2));
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	const char *s1 = "String";
	char *sOG = strdup(s1);
	char *sFT = ft_strdup(s1);
	printf("OG -> %d\n", strcmp(s1, sOG) == 0);
	printf("FT -> %d\n", strcmp(s1, sFT) == 0);
	free(sOG);
	free(sFT);
	return (0);
}*/