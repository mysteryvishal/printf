/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:37:16 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/19 10:47:10 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

static void testpf(int num, int r1, int r2, int *fails)
{
	if (r1 != r2)
	{
		fprintf(stderr, "Mismatch #%d: ft=%d std=%d\n", num, r1, r2);
		(*fails)++;
	}
	else
	{
		printf("Test #%d passed: ft=%d std=%d\n", num, r1, r2);
	}
	printf("\n");

}

int main(void)
{
	int r1, r2;
	int failures = 0;

	failures += base_tests();
	failures += edge_tests();
	if (failures)
	{
		fprintf(stderr, "%d test(s) failed\n", failures);
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}