/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:37:16 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/18 09:53:58 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

static testpf(int num, int r1, int r2, int *fails)
{
	if (r1 != r2)
	{
		fprintf(stderr, "Mismatch #%d: ft=%d std=%d\n", num, r1, r2);
		(*fails)++;
	}
}

int main(void)
{
	int r1, r2;
	int failures = 0;
	
	// 1. basic test
	r1 = ft_printf	("1) ft_printf: Hello, %s!\n", "world");
	r2 = printf	("1)    printf: Hello, %s!\n", "world");
	testpf(1, r1, r2, &failures);
	// 2. testing integers and hex
	r1 = ft_printf	("2) ft_printf: Number: %d, Hex (lower): %x, Hex (upper): %x Char: %c\n", 42, 42, 42, 'A');
	r2 = printf	("2)    printf: Number: %d, Hex (lower): %x, Hex (upper): %x Char: %c\n", 42, 42, 42, 'A');
	testpf(2, r1, r2, &failures);
	// 3. testing string
	r1 = ft_printf	("3) ft_printf: String: %s, Percent: %%\n", "test");
	r2 = printf	("3)    printf: String: %s, Percent: %%\n", "test");
	testpf(3, r1, r2, &failures);
	// 4. testing pointer
	r1 = ft_printf	("4) ft_printf: Pointer: %p\n", (void *)&r1);
	r2 = printf	("4)    printf: Pointer: %p\n", (void *)&r1);
	testpf(4, r1, r2, &failures);
	// 5. testing empty format string
	r1 = ft_printf	("");
	r2 = printf	("");
	testpf(5, r1, r2, &failures);
	// 6. testing without specifiers
	r1 = ft_printf	("6) ft_printf: without specifiers\n");
	r2 = printf	("6)    printf: without specifiers\n");
	testpf(6, r1, r2, &failures);
	// 7. testing invalid specifier
	r1 = ft_printf	("7) ft_printf: invalid specifier %z here\n");
	r2 = printf	("7)    printf: invalid specifier %z here\n");
	testpf(7, r1, r2, &failures);
	// 8. testing trailing specifier
	r1 = ft_printf	("8) ft_printf: trailing specifier %d", 42);
	r2 = printf	("8)    printf: trailing specifier %d", 42);
	testpf(8, r1, r2, &failures);
	// 9. testing leading specifier
	r1 = ft_printf	("%d) ft_printf: leading specifier\n", 9);
	r2 = printf	("%d)    printf: leading specifier\n", 9);
	testpf(9, r1, r2, &failures);
	// 10. testing null char
	r1 = ft_printf	("10) ft_printf: null char -> %c\n", '\0');
	r2 = printf	("10)    printf: null char -> %c\n", '\0');
	testpf(10, r1, r2, &failures);
	// 11. testing null pointer
	r1 = ft_printf	("11) ft_printf: null pointer -> %s\n", NULL);
	r2 = printf	("11)    printf: null pointer -> %s\n", NULL);
	testpf(11, r1, r2, &failures);
	// 12. testing empty string
	r1 = ft_printf	("12) ft_printf: empty string -> %s\n", "");
	r2 = printf	("12)    printf: empty string -> %s\n", "");
	testpf(12, r1, r2, &failures);
	// 14. testing unsigned int
	r1 = ft_printf	("14) ft_printf: unsigned int %u\n", 0);
	r2 = printf	("14)    printf: unsigned int %u\n", 0);
	testpf(14, r1, r2, &failures);
	// Edge case tests
	failures += edge_tests();
	if (failures)
	{
		fprintf(stderr, "%d test(s) failed\n", failures);
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}