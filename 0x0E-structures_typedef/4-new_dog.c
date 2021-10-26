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
	dog_t *newdog;
	struct dog *copy;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	copy = malloc(sizeof(dog_t));

	if (copy == NULL)
	{
		return (NULL);
	}

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	copy->name = newdog->name;
	copy->age = age;
	copy->owner = newdog->owner;

	return (newdog);
}
