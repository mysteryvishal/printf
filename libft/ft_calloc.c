/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:42:42 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/13 14:56:54 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calloc:
// 	allocates memory and returns a pointer to it
// 	- reserves a memory block for array of objects
// 	- initialises all bytes in the storage to 0
// 
// 	nitems: number of elements to be allocated
// 	size: size of each element

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	*arr;

	if (!size || !nitems)
		return (malloc(0));
	if (nitems > (size_t) - 1 / size)
		return (NULL);
	arr = malloc(nitems * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, (nitems * size));
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int n = 5;
	int *array;

	// use calloc function to allocate the memory
	array = (int *)ft_calloc(n, sizeof(int));

	if (array == NULL)
	{
		printf("Memory allocation failed!\n");
		return 1;
	}

	// Display the array value
	printf("Array elements after calloc: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	// free the allocated memory
	free(array);
	return 0;
}*/