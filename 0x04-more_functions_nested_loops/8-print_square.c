#include "main.h"

/**
  *print_square - prints a square
  *@size: size of the squares
  */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 0; row <= size; row++)
		{
		for (column = 0; column <= size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	}
	else
		_putchar('\n');
}
