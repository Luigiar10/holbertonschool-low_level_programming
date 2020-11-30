#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked - entry point
*
* @b: arguments
*
* Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
