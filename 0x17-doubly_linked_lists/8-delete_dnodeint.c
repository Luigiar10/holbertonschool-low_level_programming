#include "lists.h"
/**
 * delete_first_node - entry point
 *
 * @head: list
 * @tmp1: list
 */
void delete_first_node(dlistint_t **head, dlistint_t **tmp1)
{
	if (dlistint_len(*head) == 1)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(*tmp1);
	}
}

/**
 * dlistint_len - entry point
 *
 * @h: list
 *
 * Return: elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}

/**
 * delete_dnodeint_at_index - entry point
 *
 * @head: list
 * @index: index
 *
 * Return: succes or fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a;
	dlistint_t *tmp1, *tmp2;

	if ((*head == NULL) || (index > (dlistint_len(*head) - 1)))
		return (-1);
	tmp1 = *head;
	if (index == 0)
	{
		delete_first_node(head, &tmp1);
		return (1);
	}
	if (index == (dlistint_len(*head) - 1))
	{
		for (a = 0; tmp1->next != NULL; a++)
		{
			tmp1 = tmp1->next;
		}
		tmp1->prev->next = NULL;
		free(tmp1);
		return (1);
	}
	tmp2 = *head;
	tmp2 = tmp2->next;
	for (a = 1; tmp1->next != NULL; a++)
	{
		if (a == index)
		{
			tmp1->next = tmp2->next;
			tmp2->next->prev = tmp1;
			free(tmp2);
			break;
		}
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	if (tmp1->next != NULL)
		return (1);
	return (-1);
}
