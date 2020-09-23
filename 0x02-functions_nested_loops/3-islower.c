#include "holberton.h"
/**
  * _islower - Entry point
  * @c: check
  * Return: 1 
  */
int _islower(int c)
{
	if  ((c >= 'a') && (c <= 'z'))
		return (1);
		return (0);
}
