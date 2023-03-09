#include "main.h"

int sqrtfunc(int x, int i);

/**
 * _sqrt_recursion - the function to calculate sqrt
 * @n: the integer to search squareroot for
 *
 * Return: square root resulted
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrtfunc(n, 0));
}

/**
 * sqrtfunc - identify the square root of integer
 * @x: integer to identify the square  root for
 * @i: the square root itself
 *
 * Return: the square root value if any
 * or error if it doesn't exist
 */

int sqrtfunc(int x, int i)
{
	if (i * i > x)
		return (-1);
	if (i * i == x)
		return (i);
	return (sqrtfunc(x, i + 1));
}
