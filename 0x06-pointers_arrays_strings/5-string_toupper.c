#include "main.h"

/**
  *string_toupper- changes lowercase to CAPS
  *@s: input string
  *Return: pointer to char
  */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		i++;
		}
		return (s);
}
