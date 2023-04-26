#ifndef _DOG_H
#define _DOG_H

/**
 *struct dog - dogs detail info
 *@name: dogs name
 *@age: dogs age
 *@owner: dogs owner info
 *
 *Description:The purpose of this structure is used
 *to identify dog types
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
