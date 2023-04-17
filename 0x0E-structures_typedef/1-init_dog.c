#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @name: character
 * @age: float
 * @owner: character
 * @d: the dog to init
 * Return: no value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
