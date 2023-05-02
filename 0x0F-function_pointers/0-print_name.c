#include "function_pointers.h"
#include <stdio.h>

/**
  *print_name - prints a name
  *@name: string to be printed
  *@f: pointer to function
  */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
