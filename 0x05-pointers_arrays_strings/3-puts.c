#include "main.h"

/**
 * _puts - prints string followed by a new line
 * @str: pointer to string
 * Return: void
 */

void _puts(char *str)
{
	int a;

	a = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		a++;
		str++;
	}
	_putchar('\n');
}
