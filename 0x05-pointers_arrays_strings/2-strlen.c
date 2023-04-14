#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string pointer to be measured
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
