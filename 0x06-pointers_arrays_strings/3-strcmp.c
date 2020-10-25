#include "holberton.h"
/**
  * _strcmp - entry point
  *
  * @s1: variable
  * @s2: variable
  *
  * Return: Always 0.
  */
int _strcmp(char *s1, char *s2)
{
	int l;
	int a = 0;

	for (a = 0; s1[l] || s2[l]; l++)
	{
		if (s1[l] != s2[l])
		{
			a = s1[l] - s2[l];
			  break;
		}
	}
	return (a);
}
