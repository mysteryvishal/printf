/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:15:03 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/03 00:10:48 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strmapi:
// 	applies function f to each character of string s
// 	- passes index as first argument and character itself as the second

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*res;
	size_t		i;
	size_t		len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
#include <stdio.h>

char	f(unsigned int i, char c)
{
	int	shift;

	shift = 1;
	(void) i;
	if (c >= 'A' && c <= 'Z')
		return ('A' + (c - 'A' + shift) % 26);
	else if (c >= 'a' && c <= 'z')
		return ('a' + (c - 'a' + shift) % 26);
	return (c);
}

int	main(void)
{
	char *str = "Hello Zod!";
	char *res = ft_strmapi(str, f);
	if (res)
	{
		printf("%s\n", res);
		free(res);
	}
	return (0);
}*/