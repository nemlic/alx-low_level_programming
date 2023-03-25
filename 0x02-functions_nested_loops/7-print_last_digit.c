#include "main.h"

/**
  *print_last_digit -prints the last digit
  *@n: represents the int
  *Return: the value of last digit
  */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}
