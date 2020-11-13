#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - entry point
 *
 * @head: list
 * @index: index
 *
 * Return: null or index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
	{
		return (NULL);
	}
	for (x = 0; head; x++)
	{
		if (x == index)
		{
			return (head);
		}
		head = head->next;
	}
		return (NULL);
}
