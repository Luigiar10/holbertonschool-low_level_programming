#include "holberton.h"
/**
* _atoi - entry point
*
* @s: string
*
* Return: n
*/
int _atoi(char *s)
{
	int x;
	int z = 0;
	int n = 0;
	int j = 1;

	while ((*(s + z) < '0' || *(s + z) > '9') && (*(s + z) != '\0'))
	{
		if (*(s + z) == '-')
		{
			j *= -1;
		}
		z++;
	}
	x = z;
	while ((*(s + x) >= '0') && (*(s + x) <= '9'))
	{
		n = n * 10 + j * (*(s + x) - '0');
		x++;
	}
	return (n);
}
