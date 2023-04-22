#include "main.h"

/**
  *string_toupper- changes lowercase to CAPS
  *@s: input string
  *Return: pointer to char
  */
char *string_toupper(char *s)
{
	int i = 0;

		for (i = 0; s[i] != '\0'; i++)
		{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
		}
		return (s);
}
