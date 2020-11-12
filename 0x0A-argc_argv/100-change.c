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
	int x, z, y, l, a, m, ju, o, an, j, suma;

	if (argc == 2)
	{
		x = atoi(argv[1]);
		if (x > 0)
		{
			z = x / 25;
			y = x % 25;
			l = y / 10;
			a = y % 10;
			m = a / 5;
			ju = a % 5;
			o = ju / 2;
			an = ju % 2;
			j = an / 1;
			suma = z + l + m + o + j;
			printf("%d\n", suma);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
