#include <stdio.h>
/**
  *main- prints all single digit numbers of base 10 starting from 0
  *Return: always 0 (success)
  */

int main(void)
{
	int n = '0';

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
