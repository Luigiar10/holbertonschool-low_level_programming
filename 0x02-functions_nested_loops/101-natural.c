#include <stdio.h>
/**
 * main - Sum the sequence.
 *
 * Return: is 0
 */
int main(void)
{
	int z;
	int x = 0;

	for (z = 0; z < 1024; z++)
	{
		if (z % 3 == 0 || z % 5 == 0)
		{
			x = x + z;
		}
	}
	printf("%d\n", x);
	return (0);
}
