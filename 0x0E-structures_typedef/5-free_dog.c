#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog
 *@d: pointer to free the dogs
 *Return: freeeeeeeee or NULL
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
