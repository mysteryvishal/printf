/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 00:11:54 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/03 14:57:44 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// striteri:
// 	applies function f to each character of string (index, character)
// 	- each character is passed by address to f so it can be modified if 
// 	necessary.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	f(unsigned int i, char *c)
{
	int	shift;
	char	ch;

	ch = *c;
	shift = 1;
	(void) i;
	if (*c >= 'A' && *c <= 'Z')
		*c = ('A' + (ch - 'A' + shift) % 26);
	else if (*c >= 'a' && *c <= 'z')
		*c = ('a' + (ch - 'a' + shift) % 26);
}

int	main(void)
{
	char	s[] = "Hello Zod!";

	printf("before: %s\n", s);
	ft_striteri(s, f);
	printf("after : %s\n", s);
	return (0);
}*/