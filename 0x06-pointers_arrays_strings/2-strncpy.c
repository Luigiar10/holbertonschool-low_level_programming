#include "holberton.h"
/**
  * _strncpy - entry point
  *
  * @dest: variable
  * @src: variable
  * @n: variable
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int string;

	for (string = 0; string < n && src[string] != '\0'; string++)
	{
		dest[string] = src[string];
	}
	for (; string < n; string++)
	{
		dest[string] = '\0';
	}
	return (dest);
}
