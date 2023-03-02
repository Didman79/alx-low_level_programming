#include "main.h"

/**
 * reverse_array - display an array reversed
 * @a: the array to reverse
 * @n: the length  of the array
 *
 * Return: the reversed array
 */


void reverse_array(int *a, int n)
{
	int i, k, tmp;

	k = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[k];
		a[j] = tmp;
		j--;
	}
}
