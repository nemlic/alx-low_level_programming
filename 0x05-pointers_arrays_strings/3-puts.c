#include "main.h"

/**
  *_puts - functions that prints a string followed by new line
  *
  *@str: string to be printed
  */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_puchar('\n');
}
