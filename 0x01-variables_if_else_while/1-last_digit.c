#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Display the last digit
 *
 * Return: 0 (succes)
 */

int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (r > 5)
	{
		printf("Last digit of %d is greater than 5\n", r);
	} else if (r == 0)
	{
		printf("is zero");
	} else
	{
		printf("Last digit of %d is less than 6 and not 0\n", r);
	}
	return (0);

}
