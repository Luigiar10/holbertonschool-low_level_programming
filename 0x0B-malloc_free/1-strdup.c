#include "holberton.h"
#include <stdlib.h>
/**
* strdup - entry point
*
* @str: argument
*
* Return: b
*/
char *_strdup(char *str)
{
	int x, z;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (z = 0; str[z]; z++)
	{
	}
	p = malloc((z + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; str[x]; x++)
		{
			p[x] = str[x];
		}
		p[x] = '\0';
		return (p);
	}
}
