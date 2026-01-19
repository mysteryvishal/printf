
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"
#include <limits.h>

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

int edge_tests(void)
{
	int r1, r2;
	int failures = 0;
	// 5. testing empty format string
	r1 = ft_printf	("");
	r2 = printf	("");
	testpf(6, r1, r2, &failures);
	// 6. testing without specifiers
	r1 = ft_printf	("6) ft_printf: without specifiers\n");
	r2 = printf	("6)    printf: without specifiers\n");
	testpf(7, r1, r2, &failures);
	// 7. testing invalid specifier
	r1 = ft_printf	("7) ft_printf: invalid specifier %z here\n");
	r2 = printf	("7)    printf: invalid specifier %z here\n");
	testpf(8, r1, r2, &failures);
	// 8. testing trailing specifier
	r1 = ft_printf	("8) ft_printf: trailing specifier %d\n", 42);
	r2 = printf	("8)    printf: trailing specifier %d\n", 42);
	testpf(9, r1, r2, &failures);
	// 9. testing leading specifier
	r1 = ft_printf	("%d) ft_printf: leading specifier\n", 9);
	r2 = printf	("%d)    printf: leading specifier\n", 9);
	testpf(10, r1, r2, &failures);
	// 10. testing null char
	r1 = ft_printf	("10) ft_printf: null char -> %c\n", '\0');
	r2 = printf	("10)    printf: null char -> %c\n", '\0');
	testpf(11, r1, r2, &failures);
	// 11. testing null pointer
	r1 = ft_printf	("11) ft_printf: null pointer -> %s\n", NULL);
	r2 = printf	("11)    printf: null pointer -> %s\n", NULL);
	testpf(12, r1, r2, &failures);
	// 12. testing empty string
	r1 = ft_printf	("12) ft_printf: empty string -> %s\n", "");
	r2 = printf	("12)    printf: empty string -> %s\n", "");
	testpf(13, r1, r2, &failures);
	// 13. testing null pointer
	r1 = ft_printf	("13) ft_printf: null pointer -> %p\n", NULL);
	r2 = printf	("13)    printf: null pointer -> %p\n", NULL);
	testpf(14, r1, r2, &failures);
	// 15. testing unknown specifier %l
	r1 = ft_printf	("15) ft_printf: unsigned int %l <does it print this?>\n", 0);
	r2 = printf	("15)    printf: unsigned int %l <does it print this?>\n", 0);
	testpf(15, r1, r2, &failures);
	// 16. testing where format is NULL
	printf("16) Testing NULL format string:\n");
	r1 = ft_printf	(NULL);
	r2 = printf	(NULL);
	testpf(16, r1, r2, &failures);
	// 17. testing large number
	r1 = ft_printf	("17) ft_printf: large number %d\n", INT_MAX);
	r2 = printf	("17)    printf: large number %d\n", INT_MAX);
	testpf(17, r1, r2, &failures);
	// 18. testing small number
	r1 = ft_printf	("18) ft_printf: small number %d\n", INT_MIN);
	r2 = printf	("18)    printf: small number %d\n", INT_MIN);
	testpf(18, r1, r2, &failures);
	
	return (failures);
}