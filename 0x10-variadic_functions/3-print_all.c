#include "variadic_functions.h"
/**
 *pchar - entry point
 *
 *@c: list
 */
void pchar(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * pint - entry point
 *
 * @i: list
 */
void pint(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * pfloat - entry point
 *
 * @f: list
 */
void pfloat(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * pstring - entry point
 *
 * @s: the list.
 */
void pstring(va_list s)
{
	char *max;

	max = va_arg(s, char *);
	if (max == NULL)
		max = "(nil)";
	printf("%s", max);
}

/**
 * print_all - entry point
 *
 * @format: arguments
 */
void print_all(const char * const format, ...)
{
	int x = 0, z = 0;
	char *s = "";
	print_data print [] = {
	{"c", pchar},
	{"i", pint},
	{"f", pfloat},
	{"s", pstring},
	{NULL, NULL}
};
	va_list all;

	va_start(all, format);
while (format && format[x])
{
	while (print[z].spec)
	{
		if (format[x] == *(print[z].spec))
		{
			printf("%s", s);
			print[z].func(all);
			s = ", ";
			break;
		}
		z++;
	}
	z = 0;
	x++;
}
printf("\n");
va_end(all);
}
