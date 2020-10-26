#include "holberton.h"
/**
 * _strcmp - entry point
 *
 * @s1: variable input
 * @s2: variable input
 *
 * Return: variable b or 0
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int b = 0;

	for (a = 0; s1[a] || s2[a]; a++)
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			break;
		}
	}
	return (b);
}
