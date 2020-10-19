#include "holberton.h"
/**
  * _strcpy - entry point
  *
  * @dest: string.
  * @src: string.
  *
  * Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int point;

	for (point = 0; src[point] != '\0'; point++)
	{
		dest[point] = src[point];
	}
	dest[point] = '\0';
	return (dest);
}
