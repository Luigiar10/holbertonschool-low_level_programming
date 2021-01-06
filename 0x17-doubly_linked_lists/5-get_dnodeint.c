#include "lists.h"
/**
  * dlistint_len - entry point
  *
  * @h: list
  *
  * Return: number elements
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
  * get_dnodeint_at_index - entry point
  *
  * @head: list
  * @index: index
  *
  * Return: node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (index > (dlistint_len(head) - 1))
	{
		return (NULL);
	}
	for (x = 0; x < index; x++)
	{
		head = head->next;
	}
	return (head);
}
