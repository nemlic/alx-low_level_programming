#include "main.h"

/**
  *string_toupper- changes lowercase to CAPS
  *@s: input string
  *Return: pointer to char
  */
char *string_toupper(char *s)
{
	while (*s)
		if (*s >= 'a' && *s <= 'z')
			*s = *s -'a' + 'A';
	s++;
}
