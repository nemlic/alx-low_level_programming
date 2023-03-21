#include <stdio.h>
/**
  *main-prints all single digit numbers of base 10 starting from 0
  *Return: always 0 (success)
  */

int main(void)
{
	int b = 0;

	while (b < 10)
	{
		printf("%i", b);
		b++;

	}
	putchar('\n');

	return (0);
}
