#include <stdio.h>
/**
* print_buffer - entry point
*
* @b: arguments
* @size: arguments
*
*/
void print_buffer(char *b, int size)
{
	int x;
	int j;
	int z;

	for (x = 0; x < size; x += 10)
	{
		printf("%08x: ", x);

		z = (x / 10 == size / 10) ? size % 10 : 10;

		for (j = 0; j < z; j++)
		{
			if (!(j % 2))
				printf("%02x", b[x + j]);
			else
				printf("%02x ", b[x + j]);
		}
		for (; j < 10; j++)
		{
			if (!(j % 2))
				printf("  ");
			else
				printf("   ");
		}
		for (j = 0; j < z; j++)
			printf("%c", b[x + j] < 32 ? '.' : b[x + j]);

		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}