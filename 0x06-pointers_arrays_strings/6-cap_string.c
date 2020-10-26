#include "holberton.h"
/**
 * cap_string - entry point
 *
 * @s: variable input
 *
 * Return: variable s
 */
char *cap_string(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (((s[x - 1] == '.') || (s[x - 1] == '\n') || (s[x - 1] == ' ')
		|| (s[x - 1] == '\t') || (s[x - 1] == '{') || (s[x - 1] == ';')
		|| (s[x - 1] == '?') || (s[x - 1] == '}') || (s[x - 1] == '(')
		|| (s[x - 1] == ')') || (s[x - 1] == '!') || (s[x - 1] == '"')
		|| (s[x - 1] == ',') || (s[x] == s[0]))
		&& s[x] >= 97 && s[x] <= 122)
		{
			s[x] = s[x] - 32;
		}
	}
	return (s);
}
