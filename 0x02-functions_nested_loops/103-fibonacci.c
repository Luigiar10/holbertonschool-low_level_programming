#include <stdio.h>
/**
* main - entry point
*
* @void: nothing
*
* Return: Always 0
*/
int main(void)
{
	long int x = 1, z = 2, max = 2, l, j;

	for (j = 0; j < 50; j++)
	{
		l = x + z;
		x = z;
		z = l;
		if ((l >= 2) && (l <= 4000000) && (l % 2 == 0))
		{
			max += l;
		}

	}
	printf("%li\n", max);
	return (0);
}
