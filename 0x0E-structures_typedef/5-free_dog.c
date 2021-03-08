#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - let them go!!!!
 * @d: the dog structure that much be gone
 **/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
