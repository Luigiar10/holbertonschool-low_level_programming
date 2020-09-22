#include "holberton.h"
#include <ctype.h>
/**
  * islower - Entry point
  *
  * Return: 0 and 1
  */
int _islower(int c)
{
	if( (c >= 'a' && c <= 'z') )
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
