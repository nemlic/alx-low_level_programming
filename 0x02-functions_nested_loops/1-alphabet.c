#include "main.h"

/**
 * main - print alphabets in lowercase
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';


	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
