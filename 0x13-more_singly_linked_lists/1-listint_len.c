#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * listint_len - entry point
 *
 * @h: list
 *
 * Return: a
 */
size_t listint_len(const listint_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		h = h->next;
	}
	return (x);
}
