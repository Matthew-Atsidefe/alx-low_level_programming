#include "main.h"

/**
 * more_numbers - printing out 10 times the numbers from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int n = 48;
	int l = 0;
	int reset = 0;

	while (l < 10)
	{
		while (n <= 62)
		{
			if (n > 57)
			{
				reset = 10;
				_putchar(49);
			}
			_putchar(n - reset);
			n++;
		}
		n = 48;
		reset = 0;
		l++;
		_putchar(10);
	}
}
