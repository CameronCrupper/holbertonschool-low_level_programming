#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - free dog from the function
 *@d: variable
 *
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d);
}