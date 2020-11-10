#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
int funnew(char *str);
/**
 * new_dog - entry point
 *
 * @name: name.
 * @age: age.
 * @owner: owner
 *
 * Return: dog.
 *
 * Description: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int x;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = malloc(funnew(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (x = 0; name[x]; x++)
	{
		newdog->name[x] = name[x];
	}
	newdog->name[x] = '\0';
	newdog->age = age;
	newdog->owner = malloc(funnew(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (x = 0; owner[x]; x++)
	{
		newdog->owner[x] = owner[x];
	}
	newdog->owner[x] = '\0';
	return (newdog);
}

/**
 * funnew - this function counts the number of chars of x string.
 *
 * @str: string.
 *
 * Return: the count.
 *
 */
int funnew(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	return (x);
}
