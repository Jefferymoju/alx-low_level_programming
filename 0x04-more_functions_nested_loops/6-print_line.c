#include "main.h"

/**
 * print_line - prints a straight line using '_'
 * @n: the number of '_' to be printed
 */

void print_line(int n)
{
int length;
if (n > 0)
{
for (length = 0; length < n; length++)
_putchar('_');
}
_putchar('\n');
}
