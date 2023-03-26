#include "main.h"

/**
  *print_line - draw a straight line
  *@n: number of times _ is printed
  *Return: \n when false
  */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');
	_putchar('\n');
			
}
