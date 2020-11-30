#include "holberton.h"
#include <stdlib.h>
/**
* _calloc - entry point
*
* @nmemb: arguments
* @size: arguments
*
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < nmemb * size; x++)
	{
		ptr[x] = 0;
	}
	return ((void *)ptr);
}

