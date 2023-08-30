#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the powwer of y.
 * @x: the number to be raised.
 * @y: the power
 * Return: The value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	res *= _pow_recursion(c, y - 1);
	return (res);
}
