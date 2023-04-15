#include "main.h"

/**
  *puts_half- prints second half of a string
  *@str: string to be printed
  *Return: 0 on success
  */

void puts_half(char *str)
{
	int i = 0, x;

	while (count >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}
	if (i % 2 == 1)
		x = i / 2;
	else
		x = (i - 1) / 2;

	for (x++; x < i; i++)
		_putchar(str[x]);
	_putchar('\n');
}
