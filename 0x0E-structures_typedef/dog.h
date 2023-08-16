#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's information
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
