#include "main.h"

/**
 * print_diagonal - prints a diagonal line n chars long
 * @n: length of the diagonal line
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
}
