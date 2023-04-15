#include "main.h"

/**
  *print_rev - prints a string in reverse
  *@s: string to be printed
  *Return: 0 on sucess
  */
void print_rev(char *s);
{
	int c = 0;
	int i;

	while (*s != '\0')
	{
		c++;
		++s;
	}
	s--;

	for (i = c; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
