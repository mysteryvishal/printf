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

int base_tests(void)
{
	int r1, r2;
	int failures = 0;

	// 1. basic test
	r1 = ft_printf	("1) ft_printf: Hello, %s!\n", "world");
	r2 = printf	("1)    printf: Hello, %s!\n", "world");
	testpf(1, r1, r2, &failures);
	// 2. testing integers and hex
	r1 = ft_printf	("2) ft_printf: \n\tNumber (d, i): %d, %i\n\tHex (lower): %x\n\tHex (upper): %x\n\tChar: %c\n", 42, 42, 42, 42, 'A');
	r2 = printf	("2)    printf: \n\tNumber (d, i): %d, %i\n\tHex (lower): %x\n\tHex (upper): %x\n\tChar: %c\n", 42, 42, 42, 42, 'A');
	testpf(2, r1, r2, &failures);
	// 3. testing string
	r1 = ft_printf	("3) ft_printf: String: %s, Percent: %%\n", "test");
	r2 = printf	("3)    printf: String: %s, Percent: %%\n", "test");
	testpf(3, r1, r2, &failures);
	// 4. testing pointer
	r1 = ft_printf	("4) ft_printf: Pointer: %p\n", (void *)&r1);
	r2 = printf	("4)    printf: Pointer: %p\n", (void *)&r1);
	testpf(4, r1, r2, &failures);
	// 14. testing unsigned int
	r1 = ft_printf	("5) ft_printf: unsigned int %u\n", 0);
	r2 = printf	("5)    printf: unsigned int %u\n", 0);
	testpf(5, r1, r2, &failures);
	printf("----------------------------\n");
	return (failures);
}