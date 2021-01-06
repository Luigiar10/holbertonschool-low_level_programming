#include "lists.h"
/**
 * dlistint_len - entry point
 *
 * @h: list
 *
 * Return: elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
