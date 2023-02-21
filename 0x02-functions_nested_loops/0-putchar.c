#include "putchar.h"

/**
 * main -input code
 *
 * Return: 0 (success)
 */

int main(void)
{
	char *sh = "putchar";

		while (*sh)
	{
		_putchar(*sh);
		sh++
	}

	_putchar('\n');

	return (0);
}
