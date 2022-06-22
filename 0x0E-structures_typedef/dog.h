#ifndef HEADER_FILE
#define HEADER_FILE dog.h
/**
 *struct dog - will idenitfy a dog's profile
 *@name: the dog's name
 *@age: the dog's age
 *@owner: the name of the dog's owner
 *
 * Description: this structure will hold data on a specific dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 *dog_t - replaces the name and for struct dog with dog_t
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
