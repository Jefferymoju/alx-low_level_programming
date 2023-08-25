#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers that will be reversed
 * @n: the bumber of elements in the array
 */

void reverse_array(int *a, int n)
{
int j, i;

for (i = n - 1; i >= n / 2; i--)
{
j = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = j;
}
}
