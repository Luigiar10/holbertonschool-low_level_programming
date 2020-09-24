#include "holberton.h"
/**
  * print_last_digit - Entry point 
  * ram: provider ramdon num
  * Return: always 0
  */
int print_last_digit(int ram)
{
	int num = ram % 10;

	if(num >= 0)
	{
		_putchar('0' + num);
		return(num);
	}
	else
	{
		num = num * (-1);
		_putchar('0' + num);
		return(num);
	}

	return(0);
}
