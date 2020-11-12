#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x, z, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		z = atoi(argv[2]);
		y = x * z;
		printf("%d\n", y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
