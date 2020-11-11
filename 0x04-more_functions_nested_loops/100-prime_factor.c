#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long z;
	long x = 612852475143;

	for (z = 2; z < x; z++)
	{
		if ((x % z) == 0)
		{
			x =  x / z;
			z = 1;
		}
	}
	printf("%lu\n", x);
	return (0);
}
