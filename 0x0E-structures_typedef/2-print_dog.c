#include "dog.h"

/**
 * print_dog - prints all member info of a struct dog
 *
 * @d: ponter to dog to print
 */

void print_dog(struct dog *d)
{
	/*checking if d is null*/
	if (d == NULL)
	{
		return;
	}
	/*checking elements*/
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
