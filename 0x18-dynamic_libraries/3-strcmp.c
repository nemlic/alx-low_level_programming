#include "main.h"

/**
  *_strcmp - compares two strings
  *@s1: strings to be compared
  *@s2: strings to be compared
  *Return: compared
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i])
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
