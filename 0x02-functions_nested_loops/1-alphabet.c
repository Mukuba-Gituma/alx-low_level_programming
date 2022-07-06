#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabets in lowercase followed by a new line.
 * Return: void
 */

void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}
	_putchar('\n');
}
