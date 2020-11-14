#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	short int x;
	long a1, a2, a3, b1, b2, b3, max;

	b1 = 1;
	b2 = 2;
	a1 = 0;
	a2 = 0;
	max = 1000000;

	printf("%lu, %lu, ", b1, b2);
	for (x = 0; x < 96; x++)
	{
		a3 = a1 + a2;
		b3 = b1 + b2;
		if (b3 >= max)
		{
			b3 = b3 % max;
			a3++;
		}
		(a3 == 0) ? printf("%lu", b3) : printf("%lu%06lu", a3, b3);
		if (x != 95)
			printf(", ");
		a1 = a2;
		b1 = b2;
		a2 = a3;
		b2 = b3;
	}
	printf("\n");
	return (0);
}
