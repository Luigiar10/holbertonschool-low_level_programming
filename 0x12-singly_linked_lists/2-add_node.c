#include "lists.h"
/**
 * _strlen - entry point
 *
 * @str: string.
 *
 * Return: x
 */
int _strlen(const char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
	{
	}
	return (x);
}

/**
 * add_node - entry point
 *
 * @head: pointer to a pointer
 * @str: string
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->len = _strlen(str);
	newnode->str = strdup(str);
	newnode->next = (*head);
	(*head) = newnode;
	return (newnode);
}
