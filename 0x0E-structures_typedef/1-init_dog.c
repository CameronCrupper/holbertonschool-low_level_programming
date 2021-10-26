#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - function that initializes a variable type
 *@name: dog name
 *@age: dog age
 *@owner: dogs owner
 *@d: structure
 *Return: nothing else
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
