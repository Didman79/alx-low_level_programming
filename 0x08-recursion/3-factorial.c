#include "main.h"

/**
 * factorial - fonction to calculate the factorial of an integer
 * @n :the integer
 *
 * Return: factorial of n
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
