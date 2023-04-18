#include "dog.h"
#include <stdio.h>

/**
  *print_dog - prints member information for struct dog
  *@d: pointer to struct dog
  *name: name to dog
  *owner: name to the dogs owner
  *age: dogs age
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Age: %f\n", d->age);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Owner: %s\n", d->owner);
}
