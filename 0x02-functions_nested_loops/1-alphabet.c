#include "main.h"

/**
 * main - print alphabets in lowercase
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';


	while (alpha <= 'a')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
