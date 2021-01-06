#include "lists.h"
/**
  * sum_dlistint - entry point
  *
  * @head: list
  *
  * Return: list
  */
int sum_dlistint(dlistint_t *head)
{
	int x, list = 0;

	for (x = 0; head != NULL; x++)
	{
		sum += head->n;
		head = head->next;
	}
	return (list);
}
