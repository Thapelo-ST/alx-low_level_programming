#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: pointer to the dog array
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
