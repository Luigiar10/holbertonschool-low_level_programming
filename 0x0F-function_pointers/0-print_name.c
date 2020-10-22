#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_name - entry point
  *
  * @name: variable
  * @f: variable
  *
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if((name) && (f))
	{
		f(name);
	}
}
