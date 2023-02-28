#include "main.h"
/**
 * swap_int - send the value of integer a to integer b
 * and vice versa
 * @a: value for the first integer
 * @b: value for the second integer
 */
void swap_int(int *a, int *b)
{
	int n;

	n=*a;
	*a=*b;
	*b=n;
}
