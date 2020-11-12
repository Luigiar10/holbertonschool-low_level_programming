#include <stdio.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char x;

	x = *argv[0];
	x = x + 1;
	printf("%d\n", argc - 1);
	return (0);
}
