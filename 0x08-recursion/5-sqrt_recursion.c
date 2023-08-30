#include "main.h"

/**
 * _sqrt_recursion - return square root of a number
 * @n: int number
 * Return: If no natural root, return -1. Else return natural square root
 */

int _sqrt_recursion(int n)
{
	int sqroot_func(int n, int sq);

	int sq = 1;

	return (sqroot_func(n, sq));
}

/**
 * sqroot_func - helper function to solve the _sqrt_recursion
 * @sq: number to determine if square root
 * @n: int number
 * Return: square root if natural square root, -1 if none is found
 */
int sqroot_func(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqroot_func(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
