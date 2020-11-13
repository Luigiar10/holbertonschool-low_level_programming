#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - entry point
 *
 * @head: the list.
 */
void free_listint2(listint_t **head)
{
	int x;

	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	for (x = 0; *head; x++)
	{
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
	free(*head);
}
