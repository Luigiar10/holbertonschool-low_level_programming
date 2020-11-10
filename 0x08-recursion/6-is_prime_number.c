#include "holberton.h"
/**
 * multi - function
 *
 * @n: is the number to check.
 * @a: is the accumulation number.
 *
 * Return: is the result.
 */
int multi(int n, int a)
{
	if (n == 2)
	{
		return (0);
	}
	if (n % a == 0)
	{
		if (a != n)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		a++;
		return (multi(n, a));
	}
}
/**
 * is_prime_number - entry point
 *
 * @n: number
 *
 * Return: multi or 0 Always
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n > 1)
	{
		return (multi(n, a));
	}
	else
	{
		return (0);
	}
}
