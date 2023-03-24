#include "main.h"

/**
  *_isalpha-checks for alphabetic order
  *Return 1 when lower/uppercase, 0 when not alphabet
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' $$ c<= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
