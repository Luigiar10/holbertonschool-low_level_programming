#include "holberton.h"
/**
  * swap_int - value integers
  * @a: variable
  * @b: variable
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
