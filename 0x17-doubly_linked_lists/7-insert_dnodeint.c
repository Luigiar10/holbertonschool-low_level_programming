#include "lists.h"
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
  * insert_dnodeint_at_index - entry point
  *
  * @h: list
  * @idx: index
  * @n: insert
  *
  * Return: node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int j;
	dlistint_t *newnode, *tmp;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	if ((idx > (dlistint_len(*h) - 1)) || (*h == NULL))
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	tmp = *h;
	for (j = 1; tmp != NULL; j++)
	{
		if (j == idx)
		{
			newnode->next = tmp->next;
			newnode->prev = tmp;
			tmp->next = newnode;
			newnode->next->prev = newnode;
			break;
		}
		tmp = tmp->next;
	}
	return (newnode);
}
