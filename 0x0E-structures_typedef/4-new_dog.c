#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *new_dog - will create a new dog with givwn conditions
 *@name: name of a dog
 *@age: age of a dog
 *@owner: who owns the cute dog :)
 *Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pointer = malloc(sizeof(dog_t));
	char *namestr = malloc(sizeof(name));
	char *ownerstr = malloc(sizeof(owner));

	if (namestr == NULL)
	{
		free(namestr);
		return (NULL);
	}
	if (age < 0)
	{
		free(namestr);
		free(namestr);
		return (NULL);
	}
	if (ownerstr == NULL)
	{
		free(ownerstr);
		free(namestr);
		return (NULL);
	}
	if (pointer == NULL)
	{
		free(pointer);
		free(namestr);
		free(ownerstr);
		return (NULL);
	}
	strcpy(namestr, name);
	strcpy(ownerstr, owner);
	pointer->name = namestr;
	pointer->owner = ownerstr;
	pointer->age = age;
	return (pointer);
}
