#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 *
 * @d: struct dog
 *
 * Return: no value to return
 */

void print_dog(struct dog *d)
{
	if (d)
	{
	(!(d->name)) ? (printf("Name: (nil)\n")) : (printf("Name: %s\n", d->name));
	printf("Age: %f\n", d->age);
	(!(d->owner)) ? (printf("Owner: (nil)\n")) :
		(printf("Owner: %s\n", d->owner));
}
