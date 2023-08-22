#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: 1st integer to swap
 * @b: 2nd integer to swap
 */

void swap_int(int *a, int *b)
{
int j;

j = *a;
*a = *b;
*b = j;
}
