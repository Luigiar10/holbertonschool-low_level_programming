#include "holberton.h"
/**
 * _strlen_recursion - entry point
 *
 * @s: string
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
 * multi - entry
 * @s: string.
 * @a: string size.
 * @b: counter.
 * Return: the result.
 */
int multi(char *s, int a, int b)
{
	if (s[b] == s[a])
		if (a == b || a == b + 1)
			return (1);
		else
			return (multi(s, a - 1, b + 1));
	else
		return (0);
	return (1);
}
/**
 * is_palindrome - only checks if a string is palindrome.
 * @s: the string.
 * Return: 0 if it's not palindrome string, 1 if it's a palindrome.
 */
int is_palindrome(char *s)
{
	int a;
	int b;

	b = 0;
	a = _strlen_recursion(s);
	return (multi(s, a - 1, b));
}
