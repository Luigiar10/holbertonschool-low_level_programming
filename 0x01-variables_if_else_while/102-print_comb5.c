#include <stdio.h>
/**
 * main - entry point.
 *
 * Return: Always 0
 *
 */
int main(void)
{
int x, z, y, a;

	for (x = '0'; x <= '9'; x++)
	{
		for (z = '0'; z <= '8'; z++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (a = '0'; a <= '9'; a++)
				{
					if (x != '0' || z != '0' || y != '0' || a != '0')
					{
						putchar(x);
						putchar(z);
						putchar(' ');
						putchar(y);
						putchar(a);
						if (x != '9' || z != '8' || y != '9' || a != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
