#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int x, z;
	for (x = '0' ; x < '9'; x++)
	{
		for (z = x + 1; z <= '9'; z++)
		{
			putchar(x);
			putchar(z);
			if ((x != '8') || (z != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
