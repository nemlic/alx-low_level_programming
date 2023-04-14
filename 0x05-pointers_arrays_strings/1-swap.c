#include "main.h"

/**
 * swap_int - swaps two integers values
 * @a: value to be swaped with b
 * @b: value to be swapped with a
 * Return : void
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
