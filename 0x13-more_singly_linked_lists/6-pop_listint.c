#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - entry point
 *
 * @head: list.
 *
 * Return: a
 */
int pop_listint(listint_t **head)
{
	int x;

	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = (*head);
	x = tmp->n;
	(*head) = (*head)->next;
	free(tmp);
	return (x);
}
