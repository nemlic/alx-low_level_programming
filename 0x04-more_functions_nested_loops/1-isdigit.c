#include "main.h"

/**
  *_isdigit - checks if character is a digit 0 thru 9
  *@c: character to be checked
  *Return: 1 if true otherwise 0
  */

int _isdigit(int c)
{
	if ( c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
