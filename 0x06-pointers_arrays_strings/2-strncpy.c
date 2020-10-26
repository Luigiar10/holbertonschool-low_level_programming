#include "holberton.h"
/**
 * _strncpy - this function copy n chars to a string
 * @dest: input string.
 * @src: input string.
 * @n: input integer.
 * Return: the result string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
	{
		dest[s] = src[s];
	}
	for (; s < n; s++)
	{
		dest[s] = '\0';
	}
	return (dest);
}
