#include "main.h"

/**
  *reverse_array - reverses content of array
  *@n: no of elements 
  *@a: integers to be reversed array
  *Return: nothing
  */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++;)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}


}
