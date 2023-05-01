#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - adds all passed arguments
 *@n: number of arguments passed
 *@...:variable number of arguments to summ
 *Return: 0 if n==0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list lists;

	if (n == 0)
		return (0);

	va_start(lists, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(lists, int);
	}
	va_end(lists);
	return (sum);
}
