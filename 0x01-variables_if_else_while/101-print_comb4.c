#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 *
*/
int main(void)
{
	int x, z, y;

	for (x = '0' ; x < '9'; x++)
	{
		for (z = x + 1; z <= '9'; z++)
		{
			for (y = z + 1; y <= '9'; y++)
			{
				putchar(x);
				putchar(z);
				putchar(y);
				if ((x != '7') || (z != '8') || (y != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
