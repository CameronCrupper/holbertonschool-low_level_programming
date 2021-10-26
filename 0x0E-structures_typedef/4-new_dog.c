#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - make a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: your brand new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	struct dog *copy;

	nd = malloc(sizeof(dog_t));

	if (nd == NULL)
	{
		return (NULL);
	}

	copy = malloc(sizeof(dog_t));

	if (copy == NULL)
	{
		return (NULL);
	}

	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	copy->name = nd->name;
	copy->age = nd->age;
	copy->owner = nd->owner;

	return (nd);
}
