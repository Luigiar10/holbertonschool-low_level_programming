#include "holberton.h"
/**
 * reverse_array - entry point
 *
 * @a: variable input
 * @n: variable input
 *
 */
void reverse_array(int *a, int n)
{
	int r, s[1000];
	int d = 0;

	for (r = 0; r < n; r++)
	{
		s[r] = a[r];
	}
	for (r = r - 1; r >= 0; r--)
	{
		a[r] = s[d];
		d++;
	}
}
