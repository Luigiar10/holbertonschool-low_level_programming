#include "holberton.h"
#include <stdio.h>
/**
  * print_to_98 - prototype entry
  * @n: privider number
  *
  * Return: 0 always
  */
void print_to_98(int n)
{
	int to;

	if (n == 98)
	{
		printf("98");
	}
	else
	{
		if (n < 98)
		{
			for (to = n; to <= 98; to++)
			{
				printf("%d", to);
				if (to != 98)
					printf(", ");
			}
		}
		else
		{
			for (to = n; to >= 98; to--)
			{
				printf("%d", to);
				if (to != 98)
					printf(", ");
			}
		}
	}
	printf("\n");
}
