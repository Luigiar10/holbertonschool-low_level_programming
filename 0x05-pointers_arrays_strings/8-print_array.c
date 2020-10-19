#include "holberton.h"
#include <stdio.h>
/**
  * print_array - entry point
  *
  * @a: values array
  * @n: number of items array
  *
  * Return: Always 0.
  *
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
