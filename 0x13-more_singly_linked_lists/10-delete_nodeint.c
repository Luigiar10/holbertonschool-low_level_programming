#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - entry point
 *
 * @head: list.
 * @index: delete.
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;

	listint_t *tmp, *tmp2;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index > 0)
	{
		for (x = 0; tmp; x++)
		{
			if (x == (index - 1))
			{
			tmp2 = tmp->next;
			tmp->next = tmp2->next;
			free(tmp2);
			return (1);
			}
			tmp = tmp->next;
		}
		return (-1);
	}
	else
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
}
