#include "lists.h"
#include <stdio.h>
/**
 * print_list - entry point
 *
 * @h: pointer
 *
 * Return: a
 */
size_t print_list(const list_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		h = h->next;
	}
	return (x);
}
