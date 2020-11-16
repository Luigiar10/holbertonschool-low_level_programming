#include "dog.h"
/**
  * init_dog - entry point
  *
  * @d: variable
  * @name: variable
  * @age: variable
  * @owner: variable
  *
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
    d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
