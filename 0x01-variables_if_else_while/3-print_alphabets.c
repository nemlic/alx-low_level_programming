#include <stdio.h>

/**
  *main-prints alphabet in lowercase, and then in uppercase
  *Return: ALways 0 (Success)
  */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);

}
