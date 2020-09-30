#include "holberton.h"

/**
  * rev_string - string
  * @s: value provider
  *
  */
void rev_string(char *s)
{
	int a, b;
	char c;

	for (a = 0; s[a] != '\0'; a++)
	{
	}

	a--;

	for (b = 0; b < a; b++)
	{
		c = s[b];
		s[b] = s[a];
		s[a] = c;
		a--;
	}

}
