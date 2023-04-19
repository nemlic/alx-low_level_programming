#include "main.h"

/**
  *leet - encode string into 1337
  *@s: string to be changed
  *Return: string
  */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (; s[j] != '\0'; j++)
	{
		for (; a[i] != '\0'; i++)
		{
			if (s[j] == a[i])
				s[j] = b[i];
		}
	}
}

