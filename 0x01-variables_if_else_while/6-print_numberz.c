#include <stdio.h>

/**
 * main - Prints all numbers of base 10, without using type char
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
