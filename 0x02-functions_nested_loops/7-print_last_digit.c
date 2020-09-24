#include "holberton.h"
/**
  * print_last_digit - Entry point 
  * 
  * Return: always 0
  */
int print_last_digit(int ram)
{
	int num;

	num = ram % 10;
	_putchar(num);

	return(0);

}
