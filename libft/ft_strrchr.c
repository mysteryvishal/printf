/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:43:28 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/27 17:17:38 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strrchr:
//	locates the last occurance of a character in a string
// 	- returns a pointer to the located character.
//	- if the character is not found, returns NULL

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	str[] = "Hello World!";
	char		c;

	c = 'o';
	printf("Searching for \"%c\":\n", c);
	// testing a character present multiple times
	printf("ft_strrchr: %s\n", ft_strrchr(str, c));
	printf("strrchr:    %s\n", strrchr(str, c));

	
	c = 'z';
	printf("Searching for \"%c\":\n", c);
	// testing a character not present
	printf("ft_strrchr: %s\n", ft_strrchr(str, c));
	printf("strrchr:    %s\n", strrchr(str, c));
	return (0);
}*/
