#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - entry point
 *
 * @head: list.
 * @idx: index.
 * @n: node.
 *
 * Return: Null or Node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;

	listint_t *new = malloc(sizeof(listint_t)), *tmp;

	if (new == NULL || head == NULL)
	{
		return (NULL);
	}
	new->n = n;
	tmp = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (x = 0; tmp; x++)
	{
		if (x == (idx - 1))
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
	}
		return (NULL);
}
