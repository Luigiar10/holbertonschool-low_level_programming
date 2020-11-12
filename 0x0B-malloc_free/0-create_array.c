#include "holberton.h"
#include <stdlib.h>
/**
* create_array - entry point
*
* @size: arguments
* @c: arguments
*
* Return: b
*/
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *b;

	b = malloc(sizeof(char) * size);

	if (b == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			b[x] = c;
		}
	}
	return (b);
}
