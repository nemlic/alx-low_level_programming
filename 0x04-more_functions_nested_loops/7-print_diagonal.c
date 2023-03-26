#include "main.h"

/**
  *print_diagonal - draws a diagonal line
  *@n: number of times \ is printed
  *Return: \n when false <= 0
  */

void print_diagonal(int n)
{
	int draw;
	int space;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
		for (space = 1; space < draw; space++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
else
	_putchar('\n');
}

