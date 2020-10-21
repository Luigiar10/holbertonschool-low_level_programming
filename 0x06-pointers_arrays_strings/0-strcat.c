#include "holberton.h"
/**
  * _strcat - entry point
  *
  * @dest: variable
  * @src: variable
  *
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int a, b, c;
	int d = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
	}
	for (c = a; c <= a + b; c++)
	{
		dest[c] = src[d];
		d++;
	}
	return (dest);
}
