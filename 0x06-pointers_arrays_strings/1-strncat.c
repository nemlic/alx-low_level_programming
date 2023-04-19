#include "main.h"

/**
  *_strncat - concatenates two string
  *@dest: string to be concatenated
  *@src: string to appended
  *@n: length of char to be copied
  *Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		dest++;
	}

	while (src[j] != src[n])
	{
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
