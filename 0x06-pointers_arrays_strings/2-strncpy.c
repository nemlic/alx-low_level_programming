#include "main.h"

/**
  *
  *
  *
  *
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] < src[n] || src[i] != '\0')
	{
		dest[i] = src[i];

		i++;
	}

	dest[i] = '\0';
	return (dest);
	
}
