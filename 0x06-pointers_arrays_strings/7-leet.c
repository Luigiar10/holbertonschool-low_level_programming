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
	int a, b;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (b = 0; s[b]; b++)
	{
		for (a = 0; l[a]; a++)
		{
			if (s[b] == l[a])
			{
				s[b] = n[a];
			}
		}
	}
	return (s);
}
