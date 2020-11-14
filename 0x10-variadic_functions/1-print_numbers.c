#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - entry point
 *
 * @separator: argument
 * @n: argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int x;

	va_start(numbers, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(numbers, int));
		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
