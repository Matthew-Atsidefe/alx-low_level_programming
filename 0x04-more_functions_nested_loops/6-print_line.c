#include "main.h"
/**
 * print_line - function to print a straight line
 *
 * @n: parameter
 *
 * Return: retrn value
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
			_putcahr(95);
	}
	_putchar(10);
}
