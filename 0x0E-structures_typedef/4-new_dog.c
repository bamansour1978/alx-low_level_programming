#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - main
 * @s: char
 * Return: integer
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

/**
 * _strcpy - main1
 * @dest: string
 * @src: string
 * Return: character
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j]; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}


/**
 * new_dog - a function that creates a new dog.
 * @name: pointer of character
 * @age: float
 * @owner: pointer of character
 * Return: dogt_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
