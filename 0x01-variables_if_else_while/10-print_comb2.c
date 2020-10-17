#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 99; num++)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');

		if (num != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
