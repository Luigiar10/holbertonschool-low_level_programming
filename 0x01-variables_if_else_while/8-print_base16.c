#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char character;
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}

	for (character = 'a' ; character <= 'f' ; character++)
	{
		putchar(character);
	}
	putchar('\n');

	return (0);
}
