#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers geas there */

/* betty style doc for function main goes there */
 int main (void)
{

	int n;

	srand(time(0));
	n=rand()-RAND_MAX /2;
	/* your code goes there */
	/* check if n is positive */
	if(n>0)
	{ 
		printf("%d is positive\n",n );
	}
	/* check if n is zero */
	else if(n==0)
	{
		printf("%d is Zero\n",n );
	}
	/* check if n is negative */
	else
	{
		printf("%d is negative\n",n );
	}

	return (0);
}
