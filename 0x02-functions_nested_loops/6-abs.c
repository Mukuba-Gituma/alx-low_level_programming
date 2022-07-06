#include "main.h"

/**
 * _abs - Check main
 * @n: The number to be computed
 * Return: Absolute value of the number
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;

		return (abs_val);
	}

	return (n);
}
