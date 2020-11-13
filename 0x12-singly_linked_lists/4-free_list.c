#include "lists.h"
/**
 * free_list - entry point
 *
 * @head: head
 */
void free_list(list_t *head)
{
	int x;

	list_t *temp;

	for (x = 0; head; x++)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
