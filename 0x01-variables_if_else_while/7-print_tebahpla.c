#include <stdio.h>

/**
 * main - Prints alphabets in lowercase in reverse order
 * Return: 0
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	}
	putchar('\n');

	return (0);
}
