#include "main.h"
#include <stdio.h>
<<<<<<< HEAD
=======

>>>>>>> 78d1f7e60bbbd1d2fd5dac96e129c208d43f24f1
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
