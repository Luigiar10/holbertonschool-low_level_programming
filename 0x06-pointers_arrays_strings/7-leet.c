#include "holberton.h"
/**
 * leet - entry point
 *
 * @s: variable input
 *
 * Return: variable s
 */
char *leet(char *s)
{
	int x, l;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (l = 0; s[l]; l++)
	{
		for (x = 0; l[x]; x++)
		{
			if (s[l] == l[x])
			{
				s[l] = n[x];
			}
		}
	}
	return (s);
}
