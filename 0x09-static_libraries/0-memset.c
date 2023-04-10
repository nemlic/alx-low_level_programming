#include "main.h"

/**
  *_memset - add value  to a block of memory
  *@s: starting address of memory to be filled
  *@b: the desired value
  *@n: number of bytes to be changed
  *Return: changed array with the value of n bytes
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
