#include <stdio.h>
/**
 * main -this function display the fibo.
 *
 * Return: is 0
 */
int main(void)
{
	int z;
	long x;
	long l = 1;
	long a = 2;

	printf("%ld, ", l);
	for (z = 0; z <= 48; z++)
	{
		x = l + a;
		l = a;
		a = x;
		printf("%ld", l);
		if (z != 48)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
