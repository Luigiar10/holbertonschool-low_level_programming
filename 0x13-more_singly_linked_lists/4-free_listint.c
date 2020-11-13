#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - entry point
 *
 * @head: list
 */
void free_listint(listint_t *head)
{
	int x;

	listint_t *tmp;

	for (x = 0; head; x++)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
