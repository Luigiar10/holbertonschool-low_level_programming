#include "holberton.h"
/**
  * _strncat - entry point
  *
  * @dest: variable
  * @src: variable
  * @n: variable
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, c;
	int d = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
	}
	for (c = a; (c <= a + n - 1) && (src[d]); c++)
	{
		dest[c] = src[d];
		d++;
	}
	return (dest);
}
