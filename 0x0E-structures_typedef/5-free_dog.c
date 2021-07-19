#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees a structure of type dog
 * @d: a pointer to the the dog struct
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		free(d);
	else
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
