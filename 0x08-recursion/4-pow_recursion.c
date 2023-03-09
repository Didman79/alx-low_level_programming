#include "main.h"

/**
 * _pow_recursion - function to raise x to the power of y
 * @x: the base value
 * @y: the exponential value
 *
 *
 * Return: the result of the exponential function
 *
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, (y - 1)));
}
