#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - entry point
 *
 * @head: list
 * @n: node
 *
 * Return: new.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int x;

	listint_t *new = malloc(sizeof(listint_t)), *tmp;

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new;
	}
	else
	{
		tmp = (*head);
		for (x = 0; tmp->next != NULL; x++)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}
