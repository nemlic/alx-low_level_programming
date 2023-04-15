#include "main.h"
/**
 * _strlen - checks the length of a string
 * @s: string pointer to be measured
 * Return: length of the string
 */


int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
  *puts2- function that prints character of a string, starting first character
  *@str: string to be printed
  *Return: 0 on success
  */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);

	_putchar('\n');
}

