#include "main.h"

/**
 * print_most_numbers - function to print numbers from 0-9
 *
 * Return 0-9 excluding 2 and 4 followed b a new line
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i ==2) || (1 == 4))
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
