#include <stdlib.h>
#include <stdio.h>
/**
* print_opcodes - entry point
*
* @a: address
* @n: number
*
* Return: void
*/
void print_opcodes(char *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%.2hhx", a[x]);
		if (x < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
* main - entry point
*
* @argc: arguments
* @argv: arguments
*
* Return: always O
*/
int main(int argc, char **argv)
{
	int z;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	z = atoi(argv[1]);
	if (z < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
