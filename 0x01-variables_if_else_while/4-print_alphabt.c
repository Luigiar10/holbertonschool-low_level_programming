#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char alpha;
	char q = 'q';
	char e = 'e';

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		if (alpha != q && alpha != e)
		{
			putchar(alpha);
		}
	}
	putchar('\n');

	return (0);
}
