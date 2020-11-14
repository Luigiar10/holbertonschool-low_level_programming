#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - entry point
 *
 * @n: argument
 *
 * Return: max
 *
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list numbers;
	unsigned int x;
	int  max = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(numbers, n);
	for (x = 0; x < n; x++)
	{
		max += va_arg(numbers, int);
	}
	va_end(numbers);
	return (max);
}
