#include "main.h"

/**
  *_strncpy - finction that copies a string
  *@dest: location to be printed
  *@src: string to be copied
  *@n: no of times to  be copied
  *Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];

		i++;
	}
	while (i < n)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
