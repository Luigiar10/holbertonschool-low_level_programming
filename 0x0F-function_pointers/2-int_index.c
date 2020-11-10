#include "function_pointers.h"
/**
 * int_index - entry point
 *
 * @array: array.
 * @size: size array.
 * @cmp: function.
 *
 * Return: x or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size > 0 && array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
		}
	}
	return (-1);
}
