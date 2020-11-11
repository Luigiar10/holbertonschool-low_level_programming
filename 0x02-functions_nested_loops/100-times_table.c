#include "holberton.h"
/**
 * print_times_table - entry point
 *
 * @n: variable
 *
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int x, z, y;

for (x = 0; x <= n; x++)
{
for (z = 0; z <= n; z++)
{
y = x * z;
if (z == 0)
{
_putchar(y + '0');
}
else
{
_putchar(',');
_putchar(' ');
if (y / 100 == 0)
{
_putchar(' ');
if (y / 10 == 0)
{
_putchar(' ');
_putchar(y + '0');
}
else
{
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
}
else
{
_putchar((y / 100) + '0');
_putchar(((y / 10)) % 10 + '0');
_putchar((y % 10) + '0');
}
}
}
_putchar('\n');
}
}
}
