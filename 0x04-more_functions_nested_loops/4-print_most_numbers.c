#include "main.h"

/**
 * print_most_numbers - function to print numbers from 0-9
 *
 * Return 0-9 excluding 2 and 4 followed b a new line
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
