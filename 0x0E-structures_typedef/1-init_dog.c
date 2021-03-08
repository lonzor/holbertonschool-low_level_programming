#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - starts the dog creation process
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d: dog structure
 * Return: nothing
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
