#include "dog.h"

/**
 *init_dog - initialies
 *@name: dogs name
 *@age: dogs age
 *@owner: owners name
 *@d: pointer to struture
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d = '\0')
		d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
