#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *
 *
 *
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;


	va_start(strings, n);

	if (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
