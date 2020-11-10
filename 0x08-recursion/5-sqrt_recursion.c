#include "holberton.h"
/**
  * multi - function
  *
  * @a: the accumulation number.
  * @n: a copy of the number.
  *
  * Return: the root.
  */
int multi(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a != n)
	{
		a++;
		return (multi(n, a));
	}
	return (a);
}
/**
  * _sqrt_recursion - entry point
  *
  * @n: the number.
  *
  * Return: the result.
  */
int _sqrt_recursion(int n)
{
	int a = 1;

	if (n < 1)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (0);
		}
	}

	return (multi(n, a));
}
