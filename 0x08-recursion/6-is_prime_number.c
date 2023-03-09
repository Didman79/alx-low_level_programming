#include "main.h"

int checkprime(int s, int k);

/**
 * is_prime_number - judge if a number is prime
 * @n: the number
 *
 * Return: 1 if it is prime
 * 0 if it is not
 *
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (-1);
	return (checkprime(n, n - 1));
}

/**
 * checkprime - check the number s
 * @s: the number to judge
 * @k: the iteration
 *
 * Return: value 1 if s is prime, 0 if it is not
 */

int checkprime(int s, int k)
{
	if (k == 1)
		return (1);
	if (s % k == 0 && k > 0)
		return (0);
	return (checkprime(s, k - 1));
}
