#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - A dog
 * @name: The name of the dog
 * @age: The dog age
 * @owner: The dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
