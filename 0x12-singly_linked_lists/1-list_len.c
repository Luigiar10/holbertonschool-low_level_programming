#include "lists.h"
/**
 * list_len - entry point
 *
 * @h: pointer
 *
 * Return: x
 */
size_t list_len(const list_t *h)
{
	int x;

	for (x = 0; h; x++)
	{
		h = h->next;
	}
	return (x);
}
