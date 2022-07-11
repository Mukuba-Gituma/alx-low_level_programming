#include "main.h"

/**
 * print_line - prints a line n chars long
 * @n: length of the line
 * Return: void
 */

void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
