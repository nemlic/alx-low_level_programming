#include <stdio.h>
/**
  *main- prints all the numbers of base 16 in lowercase
  *Return: Always 0 (Success)
  */

int main(void)
{
	char alpha = 'a';

	int n = '0';

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
