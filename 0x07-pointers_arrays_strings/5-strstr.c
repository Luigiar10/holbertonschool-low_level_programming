#include "holberton.h"
/**
 * _strstr - entry point
 *
 * @haystack: variable string
 * @needle: variable 
 *
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int b = 0;

	if (needle[b] == '\0')
	{
		return (&haystack[0]);
	}
	for (x = 0; haystack[x]; x++)
	{
		if (haystack[x] == needle[0])
		{
			for (b = 0; needle[b] != '\0'; b++)
			{
				if (haystack[x + b] != needle[b])
				{
					break;
				}
			}
			if (needle[b] == '\0')
			{
				return (&haystack[x]);
			}
		}
	}
	return ('\0');
}
