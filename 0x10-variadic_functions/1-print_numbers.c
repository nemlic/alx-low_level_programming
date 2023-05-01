#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - prints numbers and anew line
 *@n:no of passed arguments
 *@separator: syring to be printed btwn numbers
 *@...: variable number of args passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	  var_start(nums, n);
	  for (i = 0; i < n; i++)
	  {
		  printf("%d", var_arg(nums int));
		  if (i != (n-1) && separator != NULL)
			  printf("%s", separator);
	  }
	  printf("\n");

	  var_end(nums);
}
