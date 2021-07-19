#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: the name to set
 * @age: age to set
 * @owner: owner to set
 *
 * Return: a pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* declare a new dog */
	dog_t *d;

	d = malloc(sizeof(dog_t));
	/* I verifie if @d is not null */
	if (d == NULL)
		return (NULL);
	/*since d is not NULL I initialize */
	d->name = (name) ? name : NULL;
	if (age)
		d->age = age;
	d->owner = (owner) ? owner : NULL;
	return (d);
}
