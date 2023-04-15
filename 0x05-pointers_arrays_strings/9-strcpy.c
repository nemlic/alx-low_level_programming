#include "main.h"

/**
  *_strcpy- copies the string pointed to by src
  *including the terminating null byte (\0), to the buffer pointed to by dest
  *@src: source to copy
  *@dest: copy source to here
  *Return: value to dest
  */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
		if (*src == '\0')
			break;
	}
	return (dest);
}
