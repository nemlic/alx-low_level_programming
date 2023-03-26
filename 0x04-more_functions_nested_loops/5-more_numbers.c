#include "main.h"

/**
  *more_numbers - print 0 to 14 ten times followed by a new line
  */

void more_numbers(void)
{
	int a;
	char b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b / 10 > 0)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
