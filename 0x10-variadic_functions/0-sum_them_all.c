#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list_num;
	unsigned int j;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list_num, n);

	for (j = 0; j < n; j++)
		sum += va_arg(list_num, int);

	va_end(list_num);

	return (sum);
}
