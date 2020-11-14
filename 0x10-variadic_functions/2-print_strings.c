#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - entry point
 *
 * @separator: argument
 * @n: argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int x;
	char *z;

	va_start(strings, n);
	for (x = 0; x < n; x++)
	{
		z = va_arg(strings, char *);
		if (z != NULL)
		{
			printf("%s", z);
		}
		else
		{
			printf("(nil)");
		}
		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
