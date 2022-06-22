#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog - will print the structure set for a dog
 *@d: a pointer that represents the user
 *Return: d to print the name
 */
void print_dog(struct dog *d)
{
		if (d == NULL)
			printf("");
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		if (d->age < 0)
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
}
