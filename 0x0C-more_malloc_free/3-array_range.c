#include <stdlib.h>
#include "main.h"
/**
  * array_range - creates an array of integers.
  * @min: minimum value.
  * @max: maximum value.
  * Return: array
  */

int *array_range(int min, int max)
{
	int j, range;
	int *ptr;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < range; j++)
	{
		*(ptr + j) = min + j;
	}

	return (ptr);
}
