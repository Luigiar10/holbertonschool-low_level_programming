#include "holberton.h"
/**
 * times_table - prototype of entry
 * 
 */
void times_table(void)
{

int hor, ver;

for (hor = 0; hor <= 9; hor++)
{
for (ver = 0; ver <= 9; ver++)
{
if (hor * ver >= 10)
{
_putchar((hor * ver) / 10 + '0');
_putchar((hor * ver) % 10 + '0');
if (ver != 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
if (ver != 0)
{
_putchar(' ');
}
_putchar((hor * ver) % 10 + '0');
if (ver != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
