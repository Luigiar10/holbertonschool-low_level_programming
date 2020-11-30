#include "holberton.h"
#include <stdlib.h>
/**
* string_nconcat - entry point
*
* @s1: arguments
* @s2: arguments
* @n: arguments
*
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int tam1 = 0;
	unsigned int tam2 = 0;
	unsigned int x, z;

	while (s1 == NULL)
		s1 = "";
	while (s2 == NULL)
		s2 = "";
	while (s1[tam1] != '\0')
		tam1++;
	while (s2[tam2] != '\0')
		tam2++;
	if (n >= tam2)
		n = tam2;
	ptr = malloc(sizeof(char) * (tam1 + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < tam1; x++)
	{
		ptr[x] = s1[x];
	}
	for (z = 0 ; z < n; z++)
		ptr[x + z] = s2[z];
	ptr[x + z] = '\0';
	return (ptr);
}
