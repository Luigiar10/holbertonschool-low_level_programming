#include "lists.h"
/**
  * free_dlistint - entry point
  *
  * @head: list
  */
void free_dlistint(dlistint_t *head)
{
	int x;
	dlistint_t *tmp1;

	tmp1 = head;
	for (x = 0; head != NULL; x++)
	{
		head = head->next;
		free(tmp1);
		tmp1 = head;
	}
}
