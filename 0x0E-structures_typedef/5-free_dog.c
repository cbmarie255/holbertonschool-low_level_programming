#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - freeing the dogs!
 *@d: pointer to free the dogs
 *Return: freeeeeeeee or NULL
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);i
	free(d);
}
