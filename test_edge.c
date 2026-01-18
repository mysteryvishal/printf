
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
}

int edge_tests(void)
{
	int r1, r2;
	int failures = 0;

	// 13. testing null pointer
	r1 = ft_printf	("13) ft_printf: null pointer -> %p\n", NULL);
	r2 = printf	("13)    printf: null pointer -> %p\n", NULL);
	testpf(13, r1, r2, &failures);
	// 15. testing unknown specifier %l
	r1 = ft_printf	("15) ft_printf: unsigned int %l\n0", 0);
	r2 = printf	("15)    printf: unsigned int %l\n0", 0);
	testpf(15, r1, r2, &failures);
	// 16. testing where format is NULL
	r1 = ft_printf	(NULL);
	r2 = printf	(NULL);
	testpf(16, r1, r2, &failures);
	// 17. testing large number
	r1 = ft_printf	("17) ft_printf: large number %d\n", 2147483647);
	r2 = printf	("17)    printf: large number %d\n", 2147483647);
	testpf(17, r1, r2, &failures);
}