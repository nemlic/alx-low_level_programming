#include "main.h"

/**
 * main - print alphabets in lowercase
 *Return 0 success
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
	_puchar('\n');
	return (0);
}
