/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:44:31 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/16 10:51:22 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// split:
// 	Allocates memory and returns an array of strings obtained by splitting
// 	the string ’s’ using the character ’c’ as a delimiter.
//	- The array must end with a NULL pointer.
//	- If the allocation fails, the function returns NULL.

#include "libft.h"

static size_t	ft_substr_count(const char *s, char c)
{
	size_t	count;
	int		in_sub;

	count = 0;
	in_sub = 0;
	while (*s)
	{
		if (*s != c && in_sub == 0)
		{
			in_sub = 1;
			count++;
		}
		else if (*s == c)
			in_sub = 0;
		s++;
	}
	return (count);
}

static void	ft_freeall(char **res, size_t n)
{
	size_t	i;

	if (!res)
		return ;
	i = 0;
	while (i < n)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static int	ft_fill_substr(char **res, size_t i, char const *s, size_t end)
{
	char	*substr;

	if (!s || end == 0)
	{
		ft_freeall(res, i);
		return (1);
	}
	substr = malloc(sizeof(char) * (end + 1));
	if (!substr)
	{
		ft_freeall(res, i);
		return (1);
	}
	ft_memcpy(substr, s, end);
	substr[end] = '\0';
	res[i] = substr;
	return (0);
}

static size_t	ft_substr_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	nsubstr;
	size_t	i;
	size_t	substr_len;

	if (!s)
		return (NULL);
	nsubstr = ft_substr_count(s, c);
	res = malloc(sizeof(char *) * (nsubstr + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < nsubstr)
	{
		while (s && *s == c)
			s++;
		substr_len = ft_substr_len(s, c);
		if (ft_fill_substr(res, i, s, substr_len))
			return (NULL);
		s += substr_len;
		i++;
	}
	res[nsubstr] = NULL;
	return (res);
}
