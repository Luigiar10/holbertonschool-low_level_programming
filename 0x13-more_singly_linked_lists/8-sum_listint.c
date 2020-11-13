#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - entry point
 *
 * @head: the list.
 *
 * Return: the sum.
 */
int sum_listint(listint_t *head)
{
	int max, x;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		max = 0;
		for (x = 0; head; x++)
		{
			max += head->n;
			head = head->next;
		}
		return (max);
	}
}
